#define KX_LGE_LGE_I(v1, val) { \
    switch ((v1)->type) { \
    case KEX_UND: { \
        int64_t ival = val; \
        (v1)->value.iv = ((0 == ival) ? 0 : ((0 < ival) ? -1 : 1)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_INT: { \
        int64_t iv = ((v1)->value.iv); \
        int64_t ival = val; \
        (v1)->value.iv = ((iv == ival) ? 0 : ((iv < ival) ? -1 : 1)); \
        break; \
    } \
    case KEX_BIG: { \
        bigint_t *b2 = allocate_big(ctx); \
        bigint_from_int64(b2, val); \
        (v1)->value.iv = bigint_cmp((v1)->value.bv, b2); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_DBL: { \
        double dv = (v1)->value.dv; \
        double dval = val; \
        (v1)->value.iv = ((dv == dval) ? 0 : ((dv < dval) ? -1 : 1)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_CSTR: { \
        kstr_t *s = allocate_str(ctx); \
        ks_appendf(s, "%d", val); \
        (v1)->value.iv = strcmp((v1)->value.pv, ks_string(s)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_STR: { \
        kstr_t *s = allocate_str(ctx); \
        ks_appendf(s, "%d", val); \
        (v1)->value.iv = strcmp(ks_string((v1)->value.sv), ks_string(s)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_LGE_LGE_B(v1, val) { \
    switch ((v1)->type) { \
    case KEX_UND: { \
        (v1)->value.iv = !!((val)->neg); /* don't have to care about zero. */ \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_INT: { \
        bigint_t *bi = allocate_big(ctx); \
        bigint_from_int64(bi, (v1)->value.iv); \
        (v1)->value.iv = bigint_cmp(bi, val); \
        break; \
    } \
    case KEX_BIG: { \
        (v1)->value.iv = bigint_cmp((v1)->value.bv, val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_DBL: { \
        double dv = (v1)->value.dv; \
        double bd = bigint_double(val); \
        (v1)->value.iv = ((dv == bd) ? 0 : ((dv < bd) ? -1 : 1)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_LGE_LGE_D(v1, val) { \
    switch ((v1)->type) { \
    case KEX_UND: { \
        double dval = val; \
        (v1)->value.iv = ((0.0 == dval) ? 0 : ((0.0 < dval) ? -1 : 1)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_INT: { \
        double di = (double)(v1)->value.iv; \
        double dval = val; \
        (v1)->value.iv = ((di == dval) ? 0 : ((di < dval) ? -1 : 1)); \
        break; \
    } \
    case KEX_BIG: { \
        double bd = bigint_double((v1)->value.bv); \
        double dval = val; \
        (v1)->value.iv = ((bd == dval) ? 0 : ((bd < dval) ? -1 : 1)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_DBL: { \
        double dv = (v1)->value.dv; \
        double dval = val; \
        (v1)->value.iv = ((dv == dval) ? 0 : ((dv < dval) ? -1 : 1)); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_LGE_LGE_S(v1, val) { \
    switch ((v1)->type) { \
    case KEX_UND: { \
        char buf[] = {'0', 0}; \
        (v1)->value.iv = strcmp(buf, val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_INT: { \
        char buf[24] = {0}; \
        sprintf(buf, "%lld", (v1)->value.iv); \
        (v1)->value.iv = strcmp(buf, val); \
        break; \
    } \
    case KEX_BIG: { \
        int n = bigint_write_size((v1)->value.bv, 10); \
        char *buf = malloc(n); \
        (v1)->value.iv = strcmp(bigint_write(buf, n, (v1)->value.bv), val); \
        (v1)->type = KEX_INT; \
        free(buf); \
        break; \
    } \
    case KEX_DBL: { \
        kstr_t *s = allocate_str(ctx); \
        ks_appendf(s, "%g", (v1)->value.dv, val); \
        (v1)->value.iv = strcmp(ks_string(s), val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_CSTR: { \
        (v1)->value.iv = strcmp((v1)->value.pv, val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_STR: { \
        (v1)->value.iv = strcmp(ks_string((v1)->value.sv), val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_LGE_LGE_V(v1, v2) {\
    switch ((v2)->type) { \
    case KEX_UND: { \
        KX_LGE_LGE_I(v1, 0); \
        break; \
    } \
    case KEX_INT: { \
        KX_LGE_LGE_I(v1, (v2)->value.iv); \
        break; \
    } \
    case KEX_BIG: { \
        KX_LGE_LGE_B(v1, (v2)->value.bv); \
        break; \
    } \
    case KEX_DBL: { \
        KX_LGE_LGE_D(v1, (v2)->value.dv); \
        break; \
    } \
    case KEX_CSTR: { \
        KX_LGE_LGE_S(v1, (v2)->value.pv); \
        break; \
    } \
    case KEX_STR: { \
        KX_LGE_LGE_S(v1, ks_string((v2)->value.sv)); \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/

#define KX_LGE_CODE() \
{ \
    KEX_POP_STACK_TOP(v2); \
    KEX_GET_STACK_TOP(v1); \
    KX_LGE_LGE_V(v1, v2); \
    cur = cur->next; \
} \
/**/

#define KX_LGEI_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KX_LGE_LGE_I(v1, cur->value1.i); \
    cur = cur->next; \
} \
/**/

#define KX_LGED_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KX_LGE_LGE_D(v1, cur->value1.d); \
    cur = cur->next; \
} \
/**/

#define KX_LGES_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KX_LGE_LGE_S(v1, cur->value1.s); \
    cur = cur->next; \
} \
/**/

#define KX_LGEV_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KEX_GET_VAR_ADDR(v2); \
    KX_LGE_LGE_V(v1, v2); \
    cur = cur->next; \
} \
/**/