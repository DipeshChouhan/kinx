#define KX_AND_AND_I(v1, val) { \
    if ((v1)->type == KEX_INT) { \
        int64_t v1val = (v1)->value.iv; \
        int64_t v2val = (val); \
        (v1)->value.iv &= v2val; \
    } else switch ((v1)->type) { \
    case KEX_UND: { \
        (v1)->value.iv = 0; \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_BIG: { \
        bigint_t *b2 = allocate_big(ctx); \
        bigint_from_int64(b2, val); \
        bigint_and((v1)->value.bv, (v1)->value.bv, b2); \
        KX_BIGINT_CHKINT(v1); \
        break; \
    } \
    case KEX_DBL: { \
        (v1)->value.iv = ((int64_t)(v1)->value.dv) & (val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_AND_AND_B(v1, val) { \
    if ((v1)->type == KEX_INT) { \
        bigint_t *bi = allocate_big(ctx); \
        bigint_from_int64(bi, (v1)->value.iv); \
        (v1)->value.bv = bigint_and(bi, bi, val); \
        (v1)->type = KEX_BIG; \
        KX_BIGINT_CHKINT(v1); \
    } else switch ((v1)->type) { \
    case KEX_UND: { \
        (v1)->value.iv = 0; \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_BIG: { \
        bigint_and((v1)->value.bv, (v1)->value.bv, val); \
        (v1)->type = KEX_BIG; \
        KX_BIGINT_CHKINT(v1); \
        break; \
    } \
    case KEX_DBL: { \
        bigint_t *bi = allocate_big(ctx); \
        bigint_from_int64(bi, (int64_t)((v1)->value.dv)); \
        (v1)->value.bv = bigint_and(bi, bi, val); \
        (v1)->type = KEX_BIG; \
        KX_BIGINT_CHKINT(v1); \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_AND_AND_D(v1, val) { \
    if ((v1)->type == KEX_INT) { \
        (v1)->value.iv = (v1)->value.iv & (int64_t)(val); \
        (v1)->type = KEX_INT; \
    } else switch ((v1)->type) { \
    case KEX_UND: { \
        (v1)->value.iv = 0; \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_BIG: { \
        bigint_t *bv = allocate_big(ctx); \
        bigint_from_int64(bv, (int64_t)(val)); \
        (v1)->value.bv = bigint_and((v1)->value.bv, (v1)->value.bv, bv); \
        (v1)->type = KEX_BIG; \
        KX_BIGINT_CHKINT(v1); \
        break; \
    } \
    case KEX_DBL: { \
        (v1)->value.iv = (int64_t)((v1)->value.dv) & (int64_t)(val); \
        (v1)->type = KEX_INT; \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/
#define KX_AND_AND_S(v1, val) { \
    THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
} \
/**/
#define KX_AND_AND_V(v1, v2) {\
    if (v2->type == KEX_INT) { \
        KX_AND_AND_I(v1, v2->value.iv); \
    } else switch (v2->type) { \
    case KEX_UND: { \
        (v1)->value.iv = 0; \
        (v1)->type = KEX_INT; \
        break; \
    } \
    case KEX_BIG: { \
        KX_AND_AND_B(v1, v2->value.bv); \
        break; \
    } \
    case KEX_DBL: { \
        KX_AND_AND_D(v1, v2->value.dv); \
        break; \
    } \
    default: \
        THROW_SYSTEM_EXCEPTION("SystemException", "Unsupported Operator"); \
        break; \
    } \
} \
/**/

#define KX_AND_CODE() \
{ \
    KEX_POP_STACK_TOP(v2); \
    KEX_GET_STACK_TOP(v1); \
    KX_AND_AND_V(v1, v2); \
    cur = cur->next; \
} \
/**/

#define KX_ANDI_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KX_AND_AND_I(v1, cur->value1.i); \
    cur = cur->next; \
} \
/**/

#define KX_ANDD_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KX_AND_AND_D(v1, cur->value1.d); \
    cur = cur->next; \
} \
/**/

#define KX_ANDS_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KX_AND_AND_S(v1, cur->value1.s); \
    cur = cur->next; \
} \
/**/

#define KX_ANDV_CODE() \
{ \
    KEX_GET_STACK_TOP(v1); \
    KEX_GET_VAR_ADDR(v2); \
    KX_AND_AND_V(v1, v2); \
    cur = cur->next; \
} \
/**/