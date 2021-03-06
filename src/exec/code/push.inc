#define KX_PUSH_C_CODE() \
{ \
    kx_exc_t* p = kv_pushp(kx_exc_t, (ctx)->exception); \
    p->sp = kv_size((ctx)->stack); \
    p->frmv = frmv; \
    p->lexv = lexv; \
    p->code = cur->jmp; \
    cur = cur->next; \
} \
/**/

#define KX_PUSH_NULL_CODE() \
{ \
    push_undef((ctx)->stack); \
    cur = cur->next; \
} \
/**/

#define KX_PUSH_TRUE_CODE() \
{ \
    push_true((ctx)->stack); \
    cur = cur->next; \
} \
/**/

#define KX_PUSH_FALSE_CODE() \
{ \
    push_false((ctx)->stack); \
    cur = cur->next; \
} \
/**/

#define KX_PUSH_REGEX_CODE() \
{ \
    kx_set_regex(ctx, frmv, cur); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHI_CODE() \
{ \
    push_i((ctx)->stack, cur->value1.i); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHD_CODE() \
{ \
    push_d((ctx)->stack, cur->value1.d); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHS_CODE() \
{ \
    push_s((ctx)->stack, cur->value1.s); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHB_CODE() \
{ \
    push_b((ctx)->stack, cur->value1.i, cur->value2.s); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHF_CODE() \
{ \
    push_f((ctx)->stack, cur->jmp, frmv); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHNF_CODE() \
{ \
    push_nf((ctx)->stack, cur->value2.n, frmv); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHLV_CODE() \
{ \
    int lex = cur->value1.i; \
    if (lex == 0) { \
        push_lvalue((ctx)->stack, &kv_A(frmv->v, cur->value2.i)); \
    } else if (lex == 1) { \
        push_lvalue((ctx)->stack, &kv_A(lexv->v, cur->value2.i)); \
    } else { \
        kx_frm_t *lexp = lexv; \
        while (lexp && --lex) { \
            lexp = lexp->lex; \
        } \
        push_lvalue((ctx)->stack, &kv_A(lexp ? lexp->v : frmv->v, cur->value2.i)); \
    } \
    cur = cur->next; \
} \
/**/

#define KX_PUSHV_CODE() \
{ \
    int lex = cur->value1.i; \
    if (lex == 0) { \
        push_value((ctx)->stack, kv_A(frmv->v, cur->value2.i)); \
    } else if (lex == 1) { \
        push_value((ctx)->stack, kv_A(lexv->v, cur->value2.i)); \
    } else { \
        kx_frm_t *lexp = lexv; \
        while (lexp && --lex) { \
            lexp = lexp->lex; \
        } \
        push_value((ctx)->stack, kv_A(lexp ? lexp->v : frmv->v, cur->value2.i)); \
    } \
    cur = cur->next; \
} \
/**/

#define KX_PUSHVL0_CODE() \
{ \
    /* push a local variable */ \
    push_value((ctx)->stack, kv_A(frmv->v, cur->value2.i)); \
    cur = cur->next; \
} \
/**/

#define KX_PUSHVL1_CODE() \
{ \
    /* push a local variable */ \
    push_value((ctx)->stack, kv_A(lexv->v, cur->value2.i)); \
    cur = cur->next; \
} \
/**/

#define KX_SPREAD_CODE() \
{ \
    /* spread the top of stack */ \
    KEX_POP_STACK_TOP(v1); \
    if (v1->type != KX_OBJ_T && v1->type != KX_BIN_T) { \
        THROW_SYSTEM_EXCEPTION("SystemException", "Can not spread values for non-array/binary object"); \
    } \
    kx_try_spread(ctx, cur, v1); \
    cur = cur->next; \
} \
/**/

