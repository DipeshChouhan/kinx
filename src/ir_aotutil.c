#include <stdio.h>
// #include <setjmp.h>
#include <kinx.h>
#include <jit.h>

static void dump(const unsigned char *b, int l)
{
    for (int i = 0; i < l; ++i) {
        if (i % 16 == 0) printf("\n%08X:  ", i);
        printf(" %02X", b[i]);
    }
    printf("\n");
}

struct rv { int64_t r; int ex; };
static struct rv exc;

int native_function_check(sljit_sw val, sljit_sw ex)
{
    exc.ex = ex;
    return 0;
}

int get_lexical_int_value(sljit_sw xlexp, sljit_sw xlex_no, sljit_sw xval_idx)
{
    kx_val_t *vp;
    int lex = xlex_no;
    kx_frm_t *lexp = (kx_frm_t *)xlexp;
    while (lexp && --lex) {
        lexp = lexp->lex;
    }
    vp = &kv_A(lexp->v, xval_idx);
    if (vp->type == KX_INT_T) {
        return vp->value.iv;
    }

    /*
        The exception is raised after returning function call.
        There is no way to raise it immediately so far.
        ... setjmp/longjmp did not work in callback.
     */
    exc.ex = KX_NAT_UNSUPPORTED_TYPE;
    return 0;
}

static struct rv call_hook(kx_native_funcp_t f, kx_frm_t *frmv, sljit_sw *s1, sljit_sw s2)
{
    sljit_sw info[] = {
        (sljit_sw)f,
        (sljit_sw)frmv,
    };
    return (struct rv){
        .r = f(info, s1, s2),
        .ex = exc.ex,
    };
}

int64_t call_native(kx_context_t *ctx, kx_frm_t *frmv, int count, kx_fnc_t *nfnc)
{
    kx_native_funcp_t func = nfnc->native.func;
    if (!func) {
        return KX_NAT_INVALID_FUNCTION;
    }

    int ct = count;
    kx_context_t *cx = ctx;

    int args = nfnc->native.args;
    int nargs = args < count ? args : count;
    if (nargs > KX_NAT_MAX_FUNC_ARGS) {
        return KX_NAT_TOO_MUSH_ARGS;
    }
    sljit_sw arglist[256] = {0};
    arglist[0] = nargs;
    for (int i = 1; i <= nargs; ++i) {
        kx_val_t *v = &kv_last_by(ctx->stack, i);
        switch (v->type) {
        case KX_INT_T:
            arglist[i] = (sljit_sw)(v->value.iv);
            break;
        case KX_NFNC_T:
            arglist[i] = (sljit_sw)(v->value.fn->native.func);
            break;
        default:
            return KX_NAT_UNSUPPORTED_TYPE;
        }
    }

    struct rv v = call_hook(func, frmv, arglist, 0);
    kv_shrink(cx->stack, ct);
    push_i(cx->stack, v.r);
    return v.ex;
}