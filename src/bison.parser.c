/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         kx_yyparse
#define yylex           kx_yylex
#define yyerror         kx_yyerror
#define yydebug         kx_yydebug
#define yynerrs         kx_yynerrs

#define yylval          kx_yylval
#define yychar          kx_yychar

/* Copy the first part of user declarations.  */
#line 1 "src/kinx.y" /* yacc.c:339  */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <kvec.h>
#include <kinx.h>
#include <parser.tab.h>

// #define YYDEBUG 1


#line 89 "kx.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "kx.tab.h".  */
#ifndef YY_KX_YY_KX_TAB_H_INCLUDED
# define YY_KX_YY_KX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int kx_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ERROR = 258,
    IF = 259,
    ELSE = 260,
    WHILE = 261,
    DO = 262,
    FOR = 263,
    TRY = 264,
    CATCH = 265,
    FINALLY = 266,
    BREAK = 267,
    CONTINUE = 268,
    SWITCH = 269,
    CASE = 270,
    DEFAULT = 271,
    ENUM = 272,
    NEW = 273,
    VAR = 274,
    CONST = 275,
    NATIVE = 276,
    SYSFUNC = 277,
    FUNCTION = 278,
    PUBLIC = 279,
    PRIVATE = 280,
    PROTECTED = 281,
    CLASS = 282,
    RETURN = 283,
    THROW = 284,
    YIELD = 285,
    MODULE = 286,
    MIXIN = 287,
    SYSCLASS = 288,
    SYSMODULE = 289,
    EQEQ = 290,
    NEQ = 291,
    LE = 292,
    GE = 293,
    LGE = 294,
    LOR = 295,
    LAND = 296,
    INC = 297,
    DEC = 298,
    SHL = 299,
    SHR = 300,
    POW = 301,
    LUNDEF = 302,
    ADDEQ = 303,
    SUBEQ = 304,
    MULEQ = 305,
    DIVEQ = 306,
    MODEQ = 307,
    ANDEQ = 308,
    OREQ = 309,
    XOREQ = 310,
    LANDEQ = 311,
    LOREQ = 312,
    LUNDEFEQ = 313,
    SHLEQ = 314,
    SHREQ = 315,
    REGEQ = 316,
    REGNE = 317,
    NUL = 318,
    TRUE = 319,
    FALSE = 320,
    IMPORT = 321,
    USING = 322,
    DARROW = 323,
    SQ = 324,
    DQ = 325,
    MLSTR = 326,
    BINEND = 327,
    DOTS3 = 328,
    REGPF = 329,
    NAMESPACE = 330,
    SYSNS = 331,
    NAME = 332,
    STR = 333,
    BIGINT = 334,
    INT = 335,
    TYPE = 336,
    TYPEOF = 337,
    DBL = 338,
    BIN = 339
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "src/kinx.y" /* yacc.c:355  */

    kx_object_t   *obj;
    int           type;
    int64_t       intval;
    double        dblval;
    const char    *strval;
    const uint8_t *binval;

#line 223 "kx.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE kx_yylval;

int kx_yyparse (void);

#endif /* !YY_KX_YY_KX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "kx.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  259
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3446

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  329
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  640

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,     2,     2,     2,   106,   100,     2,
      92,    93,   104,   103,    90,    89,    96,   105,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    86,
     101,    85,   102,    97,   108,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    98,    88,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   132,   132,   136,   137,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   164,   165,   169,   170,   171,
     172,   176,   180,   184,   185,   186,   187,   188,   189,   193,
     194,   195,   196,   200,   204,   205,   209,   213,   217,   221,
     222,   226,   233,   240,   250,   254,   255,   259,   260,   264,
     265,   266,   267,   271,   275,   279,   280,   281,   282,   286,
     290,   294,   295,   299,   303,   304,   308,   309,   313,   314,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   336,   337,   341,   342,   343,
     344,   345,   346,   350,   351,   355,   356,   360,   361,   365,
     366,   370,   371,   375,   376,   380,   381,   385,   386,   390,
     391,   392,   396,   397,   398,   399,   400,   401,   405,   406,
     407,   411,   412,   413,   417,   418,   419,   420,   424,   425,
     429,   430,   431,   435,   436,   437,   438,   439,   440,   441,
     445,   446,   447,   448,   449,   450,   454,   455,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   480,   481,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     520,   521,   525,   526,   530,   534,   538,   539,   543,   544,
     545,   546,   550,   551,   555,   556,   557,   558,   562,   563,
     567,   568,   569,   570,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   609,   610,   611,   615,
     619,   623,   624,   628,   629,   633,   634,   635,   636,   640,
     641,   645,   646,   647,   651,   655,   656,   660,   661,   662,
     663,   664,   665,   669,   670,   671,   675,   676,   680,   681,
     685,   686,   698,   699,   703,   704,   708,   709,   713,   714,
     715,   719,   720,   724,   725,   729,   730,   734,   735,   739,
     740,   741,   742,   746,   747,   748,   752,   753,   754,   755
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ERROR", "IF", "ELSE", "WHILE", "DO",
  "FOR", "TRY", "CATCH", "FINALLY", "BREAK", "CONTINUE", "SWITCH", "CASE",
  "DEFAULT", "ENUM", "NEW", "VAR", "CONST", "NATIVE", "SYSFUNC",
  "FUNCTION", "PUBLIC", "PRIVATE", "PROTECTED", "CLASS", "RETURN", "THROW",
  "YIELD", "MODULE", "MIXIN", "SYSCLASS", "SYSMODULE", "EQEQ", "NEQ", "LE",
  "GE", "LGE", "LOR", "LAND", "INC", "DEC", "SHL", "SHR", "POW", "LUNDEF",
  "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ", "MODEQ", "ANDEQ", "OREQ", "XOREQ",
  "LANDEQ", "LOREQ", "LUNDEFEQ", "SHLEQ", "SHREQ", "REGEQ", "REGNE", "NUL",
  "TRUE", "FALSE", "IMPORT", "USING", "DARROW", "SQ", "DQ", "MLSTR",
  "BINEND", "DOTS3", "REGPF", "NAMESPACE", "SYSNS", "NAME", "STR",
  "BIGINT", "INT", "TYPE", "TYPEOF", "DBL", "BIN", "'='", "';'", "'{'",
  "'}'", "'-'", "','", "':'", "'('", "')'", "'['", "']'", "'.'", "'?'",
  "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'*'", "'/'", "'%'", "'!'",
  "'@'", "$accept", "Program", "StatementList", "Statement",
  "BlockStatement", "NamespaceStatement", "NamespaceName", "EnumStatement",
  "EnumList", "DefinitionStatement", "LabelStatement", "IfStatement",
  "WhileStatement", "DoWhileStatement", "SwitchCaseStatement",
  "CaseStatement", "ForStatement", "TryCatchStatement",
  "CatchStatement_Opt", "FinallyStatement_Opt", "BreakStatement",
  "ReturnStatement", "YieldStatement", "YieldExpression", "ThrowStatement",
  "MixinStatement", "MixinModuleList", "ExpressionStatement",
  "AssignExpression_Opt", "AssignExpressionList_Opt", "Modifier_Opt",
  "AssignExpression", "AssignRightHandSide", "ObjectSpecialSyntax",
  "TernaryExpression", "FunctionExpression", "LogicalUndefExpression",
  "LogicalOrExpression", "LogicalAndExpression", "BitOrExpression",
  "BitXorExpression", "BitAndExpression", "CompareEqualExpression",
  "CompareExpression", "ShiftExpression", "Expression", "Term",
  "Exponentiation", "RegexMatch", "PrefixExpression", "PostfixExpression",
  "PostIncDec", "Factor", "VarName", "PropertyName", "Array", "Binary",
  "BinStart", "Object", "Comma_Opt", "ArrayItemList",
  "AssignExpressionList", "AssignExpressionObjList", "KeyValueList",
  "KeyValue", "KeySpecialName", "Regex", "RegexStart", "RegexString",
  "VarDeclStatement", "DeclAssignExpressionList", "DeclAssignExpression",
  "FunctionDeclStatement", "NormalFunctionDeclStatement", "NativeKeyword",
  "NativeType_Opt", "AnonymousFunctionDeclExpression",
  "ClassFunctionDeclStatement", "ClassDeclStatement",
  "ModuleDeclStatement", "Inherit_Opt", "ClassArgumentList_Opts",
  "ArgumentList_Opts", "ArgumentList", "Argument", "TypeName",
  "ReturnType_Opt", "ClassCallArgumentList_Opts", "CallArgumentList_Opts",
  "CallArgumentList", "CallArgument", "SpreadItem", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    61,    59,   123,   125,    45,
      44,    58,    40,    41,    91,    93,    46,    63,   124,    94,
      38,    60,    62,    43,    42,    47,    37,    33,    64
};
# endif

#define YYPACT_NINF -378

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-378)))

#define YYTABLE_NINF -265

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1585,   -47,   -13,    94,  1585,   127,    10,    40,    42,   135,
    2514,   111,    92,   237,   131,   131,  -378,   -34,   -24,   138,
     155,   166,   167,  2589,  2589,  2514,   168,   169,   170,   172,
     237,   237,  -378,  -378,  -378,  -378,    33,   164,   177,   177,
     173,  -378,  -378,  -378,  -378,   745,   237,  1976,  1660,   -18,
     157,   237,  2869,  -378,  2869,  3212,   257,   640,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,   256,  -378,  -378,  -378,   175,   395,
    -378,  -378,   -12,   223,   224,   179,   174,   171,   120,    28,
     162,   -40,    43,   220,   156,  -378,   109,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,   178,  -378,  -378,  -378,
    -378,  -378,  2514,  2514,   261,  1751,   850,   258,   186,   256,
     195,   256,   196,  2514,   191,   192,   193,  -378,  3123,  3317,
     178,  -378,   209,  -378,    41,    76,  -378,    87,   197,    13,
     198,    13,   199,   200,   202,   203,  2974,   256,  3361,   206,
     256,  3361,    10,  -378,    88,   203,    10,   109,   109,   164,
     210,   205,   221,  -378,  -378,   211,   217,  1585,   -13,  -378,
      94,   955,   127,    10,  -378,  -378,    36,    37,   135,  2514,
     237,   131,   131,   214,   -34,   -24,   138,   155,   166,   167,
    2051,  2126,   168,   215,   216,   218,    33,  -378,   -23,   219,
     228,  -378,  -378,  2201,  1060,   225,  -378,   231,   109,   232,
    3004,  3304,    -5,   -23,  -378,  3361,   236,    13,  -378,  -378,
    2276,   109,  -378,   164,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,   222,  -378,  2664,  2664,  2664,  2664,  2664,  2664,  2664,
    2664,  2664,  2664,  2664,  2664,  2664,  2364,  -378,  2869,  2869,
    2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,
    2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,  2869,
    2869,  2869,  -378,  -378,  1826,  2514,  3240,  -378,    15,   -16,
    3361,   -43,   -20,   238,   131,  2589,   102,   240,   317,  2514,
     247,  -378,   249,  -378,    25,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,   245,  -378,   259,  2664,  -378,   251,   254,   260,  2664,
      15,  -378,   131,  -378,    13,   116,   250,   255,   263,  -378,
      13,   262,    13,    13,    13,    13,   265,  -378,   268,  2739,
     271,  -378,  -378,   272,   265,  -378,  -378,   266,   280,   267,
    1165,  1270,  -378,  -378,  -378,  -378,  -378,  -378,  1585,   269,
    -378,  3123,   275,  2514,  -378,  -378,  -378,  1826,  -378,  2514,
    3319,  -378,  -378,  2439,   264,   273,   236,  -378,  -378,  -378,
     118,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  2514,  -378,   223,     1,   224,   179,
     174,   171,   120,    28,    28,   162,   162,   162,   162,   162,
     -40,   -40,    43,    43,   220,   220,   220,   156,  -378,  -378,
     -23,  -378,  3361,   118,   276,   274,  -378,   483,  -378,  -378,
    -378,  -378,   270,   278,    13,  2514,  1585,  1585,  2514,   110,
     279,  2589,   291,    10,  -378,   101,  -378,  -378,    10,  2514,
     281,    -8,   294,   285,  -378,   283,  -378,   284,  -378,    15,
      10,    13,   288,    10,   289,   290,   292,   293,   237,    10,
    -378,  3093,  3361,  -378,  -378,    10,   298,   295,  -378,  -378,
    1375,  -378,  1480,   376,   287,  -378,  -378,  3361,   296,  1727,
    -378,  -378,   -23,  3361,  -378,   316,   321,  3361,  2869,  -378,
    -378,  1901,  -378,  -378,    13,   301,  3361,   390,  -378,   123,
    2589,  2589,   314,   308,  -378,  -378,  -378,  3361,   287,  -378,
     327,   323,  -378,    15,   324,    10,   283,  -378,  -378,    10,
    -378,    10,    10,    10,  -378,   320,  -378,  -378,  -378,   328,
     325,  -378,  -378,  2514,  -378,  -378,  -378,  2814,  -378,   366,
     -23,  -378,   326,    10,  1585,   330,   334,   344,  2589,    10,
    -378,     4,   345,  2664,  -378,  -378,  -378,  -378,  -378,  -378,
    1826,  -378,  -378,  -378,  3361,  -378,  -378,  -378,    10,  -378,
    -378,  -378,  2589,  1585,   347,  -378,  -378,   361,  -378,  -378,
     363,  -378,   364,  -378,  1585,  -378,  -378,  1585,  -378,  -378
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    78,    78,     0,
       0,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,     0,     0,    76,    76,    66,     0,     0,     0,     0,
       0,     0,   269,   161,   163,   164,     0,     0,     0,     0,
     176,   160,   158,   177,   159,     0,     0,     0,     0,     0,
     214,     0,     0,   269,     0,     0,     0,     0,     3,     5,
       6,     7,    20,    22,     8,     9,    10,    11,    12,    13,
      14,    21,    15,    16,    78,    17,    18,    19,     0,    78,
      80,   103,   106,   107,   109,   111,   113,   115,   117,   119,
     122,   128,   131,   134,   138,   140,   143,   150,   162,   165,
     166,   167,   168,    39,    40,   279,   285,   105,   280,    41,
      42,    24,     0,     0,     0,     0,     0,    55,     0,    78,
       0,    78,     0,     0,     0,     0,     0,   176,     0,     0,
     285,    50,     0,   173,   275,     0,   273,     0,     0,   304,
       0,   304,     0,     0,     0,   302,     0,    78,   224,    77,
      78,    65,     0,    71,     0,   302,     0,   148,   149,     0,
       0,     0,     0,   268,    31,     0,     0,     0,   234,   235,
     236,     0,   238,   239,   240,   241,    78,    78,   244,   245,
     246,   247,   248,   284,   251,   250,   252,   253,   254,   255,
      76,    76,   256,   161,   163,   164,   262,   263,     0,   176,
     177,   265,    25,     0,     0,   216,   228,     0,   146,     0,
       0,     0,     0,     0,   210,   218,   216,   304,   292,   212,
       0,   145,   147,     0,   144,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   197,   196,   198,   199,   200,   201,   203,   204,
     202,   205,   206,   207,   208,   209,   178,   175,   174,     1,
       4,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,   157,   317,     0,     0,   151,     0,     0,
     222,     0,     0,     0,     0,    76,     0,     0,    57,     0,
       0,    59,     0,    61,     0,   234,   236,   237,   238,   239,
     242,   243,   244,   245,   246,   247,   248,   249,   251,   250,
     252,   253,   254,   255,   257,   258,   256,   259,   260,   261,
     262,     0,   264,     0,     0,    49,     0,    33,   216,     0,
       0,   271,     0,   272,   304,     0,   308,     0,   305,   306,
     304,     0,   304,   304,   304,   304,   300,   225,     0,     0,
       0,   298,    70,     0,   300,   299,   267,     0,     0,     0,
       0,     0,    43,   326,   327,   328,   329,   233,     0,     0,
      26,   217,     0,     0,   172,    97,   170,   317,   171,     0,
       0,    98,   219,   217,     0,     0,   216,   266,    64,    84,
      96,    95,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    82,    83,    68,    81,   108,     0,   110,   112,
     114,   116,   118,   120,   121,   124,   126,   127,   123,   125,
     129,   130,   133,   132,   135,   136,   137,   139,   141,   142,
       0,   325,   323,   324,     0,   318,   319,     0,   154,   153,
     312,   311,     0,     0,   304,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    54,     0,    60,    62,     0,     0,
       0,     0,   217,     0,   277,   313,   274,     0,   310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,   226,    69,    72,     0,     0,     0,   270,    27,
       0,    28,     0,   231,   172,   229,   215,   232,     0,     0,
     101,   100,     0,   220,   211,     0,     0,    67,     0,   320,
     155,     0,   152,   286,   304,     0,   223,    44,    46,     0,
      76,    76,     0,     0,    58,    79,    48,   231,     0,    34,
       0,    36,    32,     0,   276,     0,   313,   288,   307,     0,
     287,     0,     0,     0,   303,   315,   296,   227,   297,     0,
       0,    29,    30,     0,   102,    99,   221,     0,   213,   104,
       0,   321,     0,     0,     0,     0,     0,     0,    76,     0,
      35,     0,     0,     0,   282,   309,   281,   293,   294,   295,
     317,   301,    23,   169,   230,   291,   290,   322,     0,   289,
      45,    47,    76,     0,     0,    56,    37,     0,   314,   278,
       0,   283,     0,    53,     0,    38,   316,     0,    52,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,     6,     5,     2,  -378,   419,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   -22,
       3,     8,  -130,   -46,  -164,  -378,  -262,   182,   183,   184,
     185,   181,   187,   -64,  -106,   -68,   -60,  -133,   176,   -31,
      29,  -183,   -10,  -134,  -264,  -188,  -186,  -378,  -185,  -190,
     246,   -99,  -378,  -378,    67,  -378,  -378,   416,  -125,  -378,
       7,   108,  -378,  -378,     0,   342,  -378,  -378,  -378,  -378,
      90,   329,  -122,  -378,   -14,  -340,   -88,  -378,  -377,  -378,
     -62,  -198
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,   204,    58,    59,    60,   165,    61,   358,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   318,   484,
      71,    72,    73,    74,    75,    76,   154,    77,    78,   147,
     120,    79,   435,   420,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,   307,    97,    98,   258,    99,   100,   220,   101,   402,
     216,   311,   149,   205,   206,   207,   102,   159,   163,   103,
     135,   136,   104,   105,   130,   309,   107,   108,   109,   110,
     509,   376,   367,   368,   369,   472,   564,   611,   464,   465,
     466,   397
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,   212,   150,   133,   106,   366,    57,   366,   117,   114,
     394,   122,   395,   396,   312,   412,   316,   437,   129,   371,
     495,   222,   137,   224,   324,   394,   414,   395,   396,   411,
     528,   148,   148,   151,   386,   278,   470,   302,   303,   111,
     118,   118,   469,   138,   118,   106,   118,   475,   278,   294,
     476,   218,   160,   140,   393,   211,   215,   106,   139,   157,
     158,   473,   260,   295,   128,   287,   288,   289,   141,   116,
     475,    48,   559,   477,   217,   208,   474,   261,    50,   112,
     221,   560,   277,   366,   626,   279,   365,   407,   408,   409,
     127,   410,   538,   627,    43,   415,   471,   116,   417,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   119,   121,   475,   106,   119,   488,   121,
     310,   310,   320,   310,   322,   161,   359,  -242,  -243,   290,
     291,   310,   360,   419,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   531,   296,   297,   298,
     378,   302,   303,   380,   381,   285,   286,   212,   385,   566,
     302,   303,   361,   454,   455,   456,   362,   106,   493,   150,
     133,   106,   392,   363,   382,   117,   114,   362,   383,   132,
     122,   445,   446,   447,   448,   449,   113,   129,   481,   137,
     421,   475,   475,   127,   555,   421,   550,    43,   148,   148,
     362,   304,   131,   305,   106,   306,   292,   293,   134,   260,
     407,   211,   409,   475,   410,   142,   595,   300,   301,   115,
     485,   443,   444,   602,   450,   451,   536,   123,   215,   494,
     366,   498,   143,   630,   452,   453,   366,   411,   366,   366,
     366,   366,   497,   144,   145,   152,   153,   155,   502,   156,
     504,   505,   506,   507,   164,    13,   162,   259,   463,   219,
     118,   262,   539,   280,   167,   281,   299,   313,   317,   458,
     459,   284,   394,   283,   395,   396,   589,   282,   319,   308,
     411,   321,   323,   139,   141,   161,   357,   387,    32,   364,
     370,   372,   373,   480,   374,   375,   379,   388,   390,   389,
      33,    34,    35,   126,   391,  -249,  -259,  -260,   418,  -261,
     398,    37,   462,   467,   127,   401,    41,    42,    43,  -264,
      44,   479,   403,   148,   128,   404,   413,   310,   483,    47,
     478,    48,   482,   486,   586,   487,   489,   490,    50,   491,
     366,   499,    53,   474,   394,    55,   395,   396,   500,   514,
     492,   516,   545,   501,   510,   503,   508,   513,   517,   534,
     518,   463,   524,   526,   541,   551,   535,   366,   553,   540,
     544,   561,   543,   562,   558,   563,   579,   565,   583,   549,
     118,   569,   571,   572,   587,   573,   574,   512,   580,   584,
     106,   106,   617,   588,   593,   594,   520,   522,   106,   118,
     598,   599,   394,   392,   395,   396,   523,   600,   601,   603,
     366,   527,   610,   278,   612,   462,   621,   529,   613,   618,
     622,   533,   592,   616,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   623,   628,   421,
     634,   635,   537,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   636,   637,   166,   552,
     436,   276,   -78,   438,   441,   439,   416,   440,   525,   223,
     496,   442,   356,   629,   515,   457,   106,   106,   605,   591,
     276,   547,   548,   546,   384,   554,   310,   568,     0,   148,
     556,     0,     0,     0,     0,   463,     0,   557,   575,     0,
       0,     0,   567,     0,     0,   570,     0,     0,     0,     0,
       0,   576,     0,     0,     0,     0,     0,   578,     0,     0,
     106,     0,   106,     0,     0,   260,   277,   260,   596,   597,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,     0,     0,     0,     0,   462,
       0,     0,     0,     0,     0,     0,     0,     0,   148,   148,
       0,     0,     0,     0,   463,     0,     0,   604,   354,     0,
       0,   606,     0,   607,   608,   609,   624,     0,   542,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   615,
       0,   614,     0,     0,   106,   619,     0,     0,     0,   620,
     632,   625,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   462,     0,
     631,     0,     0,   106,     0,     0,     0,     0,   633,     0,
     148,     0,     0,     0,   106,     0,     0,   106,     0,   638,
      -2,     1,   639,     0,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    41,
      42,    43,     0,    44,     0,     0,   -74,    45,     0,    46,
       0,     0,    47,     0,    48,     0,     0,     0,     0,     0,
      49,    50,     0,    51,    52,    53,     1,    54,    55,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,    11,    12,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    25,   192,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
     195,   196,   197,     0,     0,     0,     0,     0,   198,    37,
      38,    39,   199,     0,    41,    42,   200,   201,    44,     0,
       0,   -74,    45,   202,    46,     0,     0,   203,     0,    48,
       0,     0,     0,     0,     0,    49,    50,     0,    51,    52,
      53,     1,    54,    55,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    41,
      42,    43,     0,    44,     0,     0,   -74,    45,   202,    46,
       0,     0,    47,     0,    48,     0,     0,     0,     0,     0,
      49,    50,     0,    51,    52,    53,     1,    54,    55,     2,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,     0,    41,    42,    43,     0,    44,     0,
       0,   -74,    45,     0,    46,     0,  -237,    47,     0,    48,
       0,     0,     0,     0,     0,    49,    50,     0,    51,    52,
      53,     1,    54,    55,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    41,
      42,    43,     0,    44,     0,     0,   -74,    45,   400,    46,
       0,     0,    47,     0,    48,     0,     0,     0,     0,     0,
      49,    50,     0,    51,    52,    53,     1,    54,    55,     2,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,     0,    41,    42,    43,     0,    44,     0,
       0,   -74,    45,   519,    46,     0,     0,    47,     0,    48,
       0,     0,     0,     0,     0,    49,    50,     0,    51,    52,
      53,     1,    54,    55,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    41,
      42,    43,     0,    44,     0,     0,   -74,    45,   521,    46,
       0,     0,    47,     0,    48,     0,     0,     0,     0,     0,
      49,    50,     0,    51,    52,    53,     1,    54,    55,     2,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,     0,    41,    42,    43,     0,    44,     0,
       0,   -74,    45,   581,    46,     0,     0,    47,     0,    48,
       0,     0,     0,     0,     0,    49,    50,     0,    51,    52,
      53,     1,    54,    55,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    41,
      42,    43,     0,    44,     0,     0,   -74,    45,   582,    46,
       0,     0,    47,     0,    48,     0,     0,     0,     0,     0,
      49,    50,     0,    51,    52,    53,     1,    54,    55,     2,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,     0,    41,    42,    43,     0,    44,     0,
       0,   -74,    45,     0,    46,     0,     0,    47,    13,    48,
       0,    16,   124,   125,     0,    49,    50,     0,    51,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,   126,     0,     0,     0,
       0,     0,     0,   213,    37,     0,     0,   127,     0,    41,
      42,    43,     0,    44,     0,     0,     0,   128,     0,    46,
       0,     0,    47,     0,    48,   214,     0,     0,     0,     0,
      49,    50,     0,    51,    52,    53,     0,    54,    55,    13,
     314,     0,    16,   124,   125,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,     0,
       0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,     0,    33,    34,    35,   126,     0,     0,
       0,     0,   585,     0,     0,    37,     0,     0,   127,     0,
      41,    42,    43,     0,    44,     0,     0,   315,   128,     0,
      46,     0,     0,    47,    13,    48,     0,    16,   124,   125,
       0,    49,    50,     0,    51,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,   126,     0,     0,     0,     0,     0,     0,   460,
      37,     0,     0,   127,   461,    41,    42,    43,     0,    44,
       0,     0,     0,   210,     0,    46,     0,     0,    47,    13,
      48,     0,    16,   124,   125,     0,    49,    50,     0,    51,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,   126,     0,     0,
       0,     0,     0,     0,   590,    37,     0,     0,   127,   461,
      41,    42,    43,     0,    44,     0,     0,     0,   210,     0,
      46,     0,     0,    47,    13,    48,     0,    16,   124,   125,
       0,    49,    50,     0,    51,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,   126,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,   127,   209,    41,    42,    43,     0,    44,
       0,     0,     0,   210,     0,    46,     0,     0,    47,    13,
      48,     0,    16,   124,   125,     0,    49,    50,     0,    51,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,   126,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,   127,     0,
      41,    42,    43,     0,    44,     0,     0,     0,   146,     0,
      46,     0,  -257,    47,    13,    48,     0,    16,   124,   125,
       0,    49,    50,     0,    51,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,   126,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,   127,     0,    41,    42,    43,     0,    44,
       0,     0,     0,   146,     0,    46,     0,  -258,    47,    13,
      48,     0,    16,   124,   125,     0,    49,    50,     0,    51,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,   126,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,   127,   399,
      41,    42,    43,     0,    44,     0,     0,     0,   210,     0,
      46,     0,     0,    47,    13,    48,     0,    16,   124,   125,
       0,    49,    50,     0,    51,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,    35,   126,     0,     0,     0,     0,     0,     0,   213,
      37,     0,     0,   127,     0,    41,    42,    43,     0,    44,
       0,     0,     0,   128,     0,    46,     0,     0,    47,     0,
      48,     0,     0,     0,     0,     0,    49,    50,     0,    51,
      52,    53,    13,    54,    55,    16,   124,   125,     0,     0,
       0,     0,     0,     0,   434,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
     126,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,   127,     0,    41,    42,    43,     0,    44,     0,     0,
       0,   210,     0,    46,     0,     0,    47,    13,    48,     0,
      16,   124,   125,     0,    49,    50,     0,    51,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,   126,     0,     0,     0,     0,
       0,     0,   532,    37,     0,     0,   127,     0,    41,    42,
      43,     0,    44,     0,     0,     0,   128,     0,    46,     0,
       0,    47,    13,    48,     0,    16,   124,   125,     0,    49,
      50,     0,    51,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
     126,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,   127,     0,    41,    42,    43,     0,    44,     0,     0,
       0,   128,     0,    46,     0,     0,    47,    13,    48,     0,
      16,   124,   125,     0,    49,    50,     0,    51,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,   126,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,   127,     0,    41,    42,
      43,     0,    44,     0,     0,     0,   146,     0,    46,     0,
       0,    47,    13,    48,     0,    16,   124,   125,     0,    49,
      50,     0,    51,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
     126,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,   127,     0,    41,    42,    43,     0,    44,     0,     0,
       0,   210,     0,    46,     0,     0,    47,    13,    48,     0,
      16,   124,   125,     0,    49,    50,     0,    51,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,   126,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,   127,     0,    41,    42,
      43,     0,    44,     0,     0,     0,   511,     0,    46,     0,
       0,    47,    13,    48,     0,    16,   124,   125,     0,    49,
      50,     0,    51,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
     126,     0,     0,     0,     0,     0,     0,    13,    37,     0,
       0,   127,     0,    41,    42,    43,     0,    44,     0,     0,
       0,    45,     0,    46,     0,     0,    47,     0,    48,     0,
       0,    30,    31,     0,    49,    50,     0,    51,    52,    53,
      32,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,    35,   126,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,   127,     0,    41,    42,
      43,     0,    44,     0,     0,     0,   128,     0,    46,     0,
       0,    47,     0,    48,     0,     0,     0,     0,     0,     0,
      50,     0,    51,    52,    53,     0,    54,    55,   325,   169,
     326,   327,   328,   329,   174,   175,   330,   331,   332,   333,
       0,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,     0,   346,     0,     0,   325,   169,
     326,   327,   328,   329,   174,   175,   330,   331,   332,   333,
       0,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,     0,   346,     0,   347,   348,   349,
     350,   197,     0,     0,     0,     0,     0,   198,     0,     0,
       0,   351,     0,     0,     0,   352,   201,     0,     0,     0,
       0,     0,   377,     0,     0,     0,   353,   347,   348,   349,
     350,   197,     0,     0,     0,     0,     0,   198,     0,     0,
       0,   351,     0,     0,     0,   352,   201,     0,     0,     0,
       0,     0,   405,     0,     0,     0,   353,   325,   169,   326,
     327,   328,   329,   174,   175,   330,   331,   332,   333,     0,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,     0,   346,     0,     0,   325,   169,   326,
     327,   328,   329,   174,   175,   330,   331,   332,   333,     0,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,     0,   346,     0,   347,   348,   349,   350,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
     351,     0,     0,     0,   352,   201,     0,     0,     0,     0,
       0,   577,     0,     0,     0,   353,   347,   348,   349,   350,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
     351,     0,     0,     0,   352,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   353,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,     0,   250,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
       0,   250,     0,     0,     0,   251,   252,   253,   254,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,     0,     0,     0,   257,     0,     0,     0,     0,     0,
       0,     0,     0,   251,   252,   253,   254,   255,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,     0,
       0,     0,   468,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     0,
     250,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,     0,
       0,     0,   251,   252,   253,   254,   255,     0,     0,   354,
       0,     0,     0,     0,     0,     0,   256,   406,     0,     0,
       0,   530,   354,     0,     0,     0,     0,     0,   355,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354
};

static const yytype_int16 yycheck[] =
{
       0,    47,    24,    13,     4,   139,     0,   141,     6,     4,
     198,     8,   198,   198,   113,   213,   115,   279,    10,   141,
     360,    52,    15,    54,   123,   213,   216,   213,   213,   212,
     407,    23,    24,    25,   159,    47,    21,    42,    43,    86,
       4,     4,   306,    77,     4,    45,     4,    90,    47,    89,
      93,    49,    19,    77,    77,    47,    48,    57,    92,    30,
      31,    77,    57,   103,    87,    37,    38,    39,    92,    87,
      90,    94,    80,    93,    92,    46,    92,    74,   101,    92,
      51,    89,    79,   217,    80,    97,    73,    92,    93,    94,
      77,    96,    91,    89,    81,   217,    81,    87,   223,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    77,    77,    90,   116,    77,    93,    77,
     112,   113,   119,   115,   121,    92,    85,    91,    91,   101,
     102,   123,    91,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   410,   104,   105,   106,
     147,    42,    43,   150,   152,    35,    36,   203,   156,   499,
      42,    43,    86,   296,   297,   298,    90,   167,   358,   191,
     180,   171,   167,    86,    86,   173,   171,    90,    90,    87,
     177,   287,   288,   289,   290,   291,    92,   179,    86,   182,
     354,    90,    90,    77,    93,   359,    86,    81,   190,   191,
      90,    92,    91,    94,   204,    96,    44,    45,    77,   204,
      92,   203,    94,    90,    96,    77,    93,    61,    62,    92,
     319,   285,   286,   563,   292,   293,   416,    92,   220,   359,
     364,   365,    77,   610,   294,   295,   370,   420,   372,   373,
     374,   375,   364,    77,    77,    77,    77,    77,   370,    77,
     372,   373,   374,   375,    77,    18,    92,     0,   304,   102,
       4,    86,   460,    40,    91,    41,    46,     6,    10,   300,
     301,   100,   460,    99,   460,   460,   538,    98,    92,   101,
     463,    86,    86,    92,    92,    92,    77,    77,    51,    92,
      92,    92,    92,   315,    92,    92,    90,    92,    87,    78,
      63,    64,    65,    66,    87,    91,    91,    91,    86,    91,
      91,    74,   304,   305,    77,    90,    79,    80,    81,    91,
      83,   314,    91,   315,    87,    93,    90,   319,    11,    92,
      92,    94,    92,    86,   532,    86,    91,    78,   101,    85,
     474,    91,   105,    92,   532,   108,   532,   532,    93,    77,
      90,    85,   474,    90,    86,    93,    91,    86,    78,    95,
      93,   407,    93,    88,    90,    86,    93,   501,    77,    93,
      92,    77,   102,    88,    93,    92,    78,    93,    91,   478,
       4,    93,    93,    93,    68,    93,    93,   379,    93,    93,
     390,   391,   590,    72,    93,     5,   390,   391,   398,     4,
      86,    93,   590,   398,   590,   590,   398,    80,    85,    85,
     544,   403,    92,    47,    86,   407,    86,   409,    93,    93,
      86,   413,   544,   587,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    93,    93,   603,
      93,    80,   434,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    93,    93,    39,   481,
     278,    85,    86,   280,   283,   281,   220,   282,   401,    53,
     362,   284,   130,   603,   384,   299,   476,   477,   566,   541,
      85,   476,   477,   475,   155,   483,   478,   501,    -1,   481,
     488,    -1,    -1,    -1,    -1,   541,    -1,   489,   508,    -1,
      -1,    -1,   500,    -1,    -1,   503,    -1,    -1,    -1,    -1,
      -1,   509,    -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,
     520,    -1,   522,    -1,    -1,   520,   523,   522,   550,   551,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,   541,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   550,   551,
      -1,    -1,    -1,    -1,   610,    -1,    -1,   565,    85,    -1,
      -1,   569,    -1,   571,   572,   573,   598,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   587,
      -1,   583,    -1,    -1,   594,   593,    -1,    -1,    -1,   594,
     622,   599,    -1,    -1,    -1,    -1,   598,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   610,    -1,
     618,    -1,    -1,   623,    -1,    -1,    -1,    -1,   623,    -1,
     622,    -1,    -1,    -1,   634,    -1,    -1,   637,    -1,   634,
       0,     1,   637,    -1,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    86,    87,    -1,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,     1,   107,   108,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,     1,   107,   108,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,     1,   107,   108,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,     1,   107,   108,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,     1,   107,   108,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,     1,   107,   108,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,     1,   107,   108,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    -1,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,   104,
     105,     1,   107,   108,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,     1,   107,   108,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    -1,
      -1,    86,    87,    -1,    89,    -1,    -1,    92,    18,    94,
      -1,    21,    22,    23,    -1,   100,   101,    -1,   103,   104,
     105,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    77,    -1,    79,
      80,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,
      -1,    -1,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   105,    -1,   107,   108,    18,
      19,    -1,    21,    22,    23,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    74,    -1,    -1,    77,    -1,
      79,    80,    81,    -1,    83,    -1,    -1,    86,    87,    -1,
      89,    -1,    -1,    92,    18,    94,    -1,    21,    22,    23,
      -1,   100,   101,    -1,   103,   104,   105,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    -1,    83,
      -1,    -1,    -1,    87,    -1,    89,    -1,    -1,    92,    18,
      94,    -1,    21,    22,    23,    -1,   100,   101,    -1,   103,
     104,   105,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,
      89,    -1,    -1,    92,    18,    94,    -1,    21,    22,    23,
      -1,   100,   101,    -1,   103,   104,   105,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    78,    79,    80,    81,    -1,    83,
      -1,    -1,    -1,    87,    -1,    89,    -1,    -1,    92,    18,
      94,    -1,    21,    22,    23,    -1,   100,   101,    -1,   103,
     104,   105,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    -1,
      79,    80,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,
      89,    -1,    91,    92,    18,    94,    -1,    21,    22,    23,
      -1,   100,   101,    -1,   103,   104,   105,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    -1,    79,    80,    81,    -1,    83,
      -1,    -1,    -1,    87,    -1,    89,    -1,    91,    92,    18,
      94,    -1,    21,    22,    23,    -1,   100,   101,    -1,   103,
     104,   105,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    83,    -1,    -1,    -1,    87,    -1,
      89,    -1,    -1,    92,    18,    94,    -1,    21,    22,    23,
      -1,   100,   101,    -1,   103,   104,   105,    -1,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    77,    -1,    79,    80,    81,    -1,    83,
      -1,    -1,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,
     104,   105,    18,   107,   108,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    79,    80,    81,    -1,    83,    -1,    -1,
      -1,    87,    -1,    89,    -1,    -1,    92,    18,    94,    -1,
      21,    22,    23,    -1,   100,   101,    -1,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    79,    80,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,    -1,
      -1,    92,    18,    94,    -1,    21,    22,    23,    -1,   100,
     101,    -1,   103,   104,   105,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    79,    80,    81,    -1,    83,    -1,    -1,
      -1,    87,    -1,    89,    -1,    -1,    92,    18,    94,    -1,
      21,    22,    23,    -1,   100,   101,    -1,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    -1,    79,    80,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,    -1,
      -1,    92,    18,    94,    -1,    21,    22,    23,    -1,   100,
     101,    -1,   103,   104,   105,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    79,    80,    81,    -1,    83,    -1,    -1,
      -1,    87,    -1,    89,    -1,    -1,    92,    18,    94,    -1,
      21,    22,    23,    -1,   100,   101,    -1,   103,   104,   105,
      -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    -1,    79,    80,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,    -1,
      -1,    92,    18,    94,    -1,    21,    22,    23,    -1,   100,
     101,    -1,   103,   104,   105,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    18,    74,    -1,
      -1,    77,    -1,    79,    80,    81,    -1,    83,    -1,    -1,
      -1,    87,    -1,    89,    -1,    -1,    92,    -1,    94,    -1,
      -1,    42,    43,    -1,   100,   101,    -1,   103,   104,   105,
      51,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    -1,    79,    80,
      81,    -1,    83,    -1,    -1,    -1,    87,    -1,    89,    -1,
      -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   103,   104,   105,    -1,   107,   108,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    -1,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    92,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    92,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    -1,    -1,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    -1,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    92,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    -1,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    82,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    93,    -1,    -1,
      -1,    82,    85,    -1,    -1,    -1,    -1,    -1,    91,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     6,     7,     8,     9,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      42,    43,    51,    63,    64,    65,    66,    74,    75,    76,
      77,    79,    80,    81,    83,    87,    89,    92,    94,   100,
     101,   103,   104,   105,   107,   108,   110,   111,   112,   113,
     114,   116,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   129,   130,   131,   132,   133,   134,   136,   137,   140,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   161,   162,   164,
     165,   167,   175,   178,   181,   182,   183,   185,   186,   187,
     188,    86,    92,    92,   112,    92,    87,   113,     4,    77,
     139,    77,   139,    92,    22,    23,    66,    77,    87,   140,
     183,    91,    87,   161,    77,   179,   180,   179,    77,    92,
      77,    92,    77,    77,    77,    77,    87,   138,   140,   171,
     138,   140,    77,    77,   135,    77,    77,   159,   159,   176,
      19,    92,    92,   177,    77,   115,   115,    91,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    63,    64,    65,    66,    67,    73,    77,
      81,    82,    88,    92,   111,   172,   173,   174,   159,    78,
      87,   140,   142,    73,    95,   140,   169,    92,   113,   102,
     166,   159,   158,   176,   158,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      31,    63,    64,    65,    66,    67,    77,    82,   163,     0,
     112,   139,    86,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    85,   139,    47,    97,
      40,    41,    98,    99,   100,    35,    36,    37,    38,    39,
     101,   102,    44,    45,    89,   103,   104,   105,   106,    46,
      61,    62,    42,    43,    92,    94,    96,   160,   101,   184,
     140,   170,   170,     6,    19,    86,   170,    10,   127,    92,
     139,    86,   139,    86,   170,     4,     6,     7,     8,     9,
      12,    13,    14,    15,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    31,    63,    64,    65,
      66,    77,    81,    92,    85,    91,   184,    77,   117,    85,
      91,    86,    90,    86,    92,    73,   162,   191,   192,   193,
      92,   191,    92,    92,    92,    92,   190,    88,   139,    90,
     139,   113,    86,    90,   190,   113,   177,    77,    92,    78,
      87,    87,   112,    77,   164,   165,   167,   200,    91,    78,
      88,    90,   168,    91,    93,    88,    93,    92,    93,    94,
      96,   160,   200,    90,   168,   191,   169,   177,    86,   141,
     142,   143,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,    30,   141,   146,   145,   147,   148,
     149,   150,   151,   152,   152,   153,   153,   153,   153,   153,
     154,   154,   155,   155,   156,   156,   156,   157,   158,   158,
      73,    78,   140,   142,   197,   198,   199,   140,    82,   163,
      21,    81,   194,    77,    92,    90,    93,    93,    92,   179,
     138,    86,    92,    11,   128,   170,    86,    86,    93,    91,
      78,    85,    90,   168,   141,   194,   180,   191,   162,    91,
      93,    90,   191,    93,   191,   191,   191,   191,    91,   189,
      86,    87,   140,    86,    77,   189,    85,    78,    93,    88,
     111,    88,   111,   140,    93,   173,    88,   140,   197,   140,
      82,   163,    73,   140,    95,    93,   168,   140,    91,   200,
      93,    90,    95,   102,    92,   191,   140,   112,   112,   170,
      86,    86,   138,    77,   113,    93,   113,   140,    93,    80,
      89,    77,    88,    92,   195,    93,   194,   113,   193,    93,
     113,    93,    93,    93,    93,   161,   113,    88,   113,    78,
      93,    88,    88,    91,    93,    95,   200,    68,    72,   145,
      73,   199,   191,    93,     5,    93,   138,   138,    86,    93,
      80,    85,   194,    85,   113,   195,   113,   113,   113,   113,
      92,   196,    86,    93,   140,   113,   143,   200,    93,   113,
     112,    86,    86,    93,   138,   113,    80,    89,    93,   141,
     197,   113,   138,   112,    93,    80,    93,    93,   112,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   114,
     114,   115,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   119,   120,   120,   121,   122,   123,   124,
     124,   125,   125,   125,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   130,   131,   132,   132,   132,   132,   133,
     134,   135,   135,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   142,
     142,   142,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   151,   152,   152,   152,   152,   152,   152,   153,   153,
     153,   154,   154,   154,   155,   155,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     159,   159,   159,   159,   159,   159,   160,   160,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     164,   164,   165,   165,   166,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   171,   171,   172,   172,
     173,   173,   173,   173,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   175,   176,
     177,   178,   178,   179,   179,   180,   180,   180,   180,   181,
     181,   182,   182,   182,   183,   184,   184,   185,   185,   185,
     185,   185,   185,   186,   186,   186,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     193,   194,   194,   195,   195,   196,   196,   197,   197,   198,
     198,   198,   198,   199,   199,   199,   200,   200,   200,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     2,     2,     3,     4,     4,     5,
       5,     1,     5,     1,     3,     4,     3,     5,     6,     1,
       1,     1,     1,     3,     5,     7,     5,     7,     5,     3,
       2,    10,     9,     8,     4,     0,     5,     0,     2,     3,
       4,     3,     4,     4,     3,     2,     1,     4,     3,     4,
       3,     1,     3,     2,     0,     2,     0,     1,     0,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     2,     2,     4,
       3,     3,     4,     1,     5,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     2,     2,
       1,     2,     4,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       3,     3,     3,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     2,     5,     0,     4,     0,     1,     1,     2,
       3,     4,     1,     3,     1,     2,     3,     4,     1,     3,
       5,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     0,
       3,     3,     3,     1,     3,     1,     4,     3,     6,     1,
       1,     6,     6,     7,     1,     0,     3,     5,     5,     6,
       6,     6,     2,     6,     6,     6,     5,     5,     3,     3,
       0,     3,     0,     3,     0,     1,     1,     3,     1,     4,
       2,     1,     1,     0,     3,     0,     3,     0,     1,     1,
       2,     3,     4,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 132 "src/kinx.y" /* yacc.c:1646  */
    { kx_ast_root = kx_gen_bexpr_object(KXST_STMTLIST, (yyvsp[0].obj), kx_gen_stmt_object(KXST_RET, NULL, NULL, NULL)); }
#line 2352 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 137 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_STMTLIST, (yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2358 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 159 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_object((yyvsp[-3].strval), KX_UNKNOWN_T), kx_gen_import_object((yyvsp[-1].strval))); }
#line 2364 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "src/kinx.y" /* yacc.c:1646  */
    { yyerrok; }
#line 2370 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2376 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_block_object((yyvsp[-1].obj)); }
#line 2382 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 169 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2388 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 170 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2394 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 171 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_namespace_object(0, (yyvsp[-3].strval), (yyvsp[-1].obj)); }
#line 2400 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 172 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_namespace_object(1, (yyvsp[-3].strval), (yyvsp[-1].obj)); }
#line 2406 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 176 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = kx_gen_namespace_name_object((yyvsp[0].strval)); }
#line 2412 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 180 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_enum_reset((yyvsp[-2].obj)); }
#line 2418 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_enum_object((yyvsp[0].strval)); }
#line 2424 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 185 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_enum_object_with((yyvsp[-2].strval), (yyvsp[0].intval)); }
#line 2430 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 186 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_enum_object_with((yyvsp[-3].strval), -(yyvsp[0].intval)); }
#line 2436 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 187 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-2].obj), kx_gen_enum_object((yyvsp[0].strval))); }
#line 2442 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 188 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-4].obj), kx_gen_enum_object_with((yyvsp[-2].strval), (yyvsp[0].intval))); }
#line 2448 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 189 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-5].obj), kx_gen_enum_object_with((yyvsp[-3].strval), -(yyvsp[0].intval))); }
#line 2454 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 200 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_label_object(KXST_LABEL, (yyvsp[-2].strval), (yyvsp[0].obj)); }
#line 2460 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 204 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_IF, (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 2466 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 205 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_IF, (yyvsp[-4].obj), (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2472 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 209 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_WHILE, (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 2478 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 213 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_DO, (yyvsp[-2].obj), (yyvsp[-5].obj), NULL); }
#line 2484 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 217 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_SWITCH, (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 2490 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 221 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_case_stmt_object(KXCS_CASE, (yyvsp[-1].obj)); }
#line 2496 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 222 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_case_stmt_object(KXCS_DEFAULT, NULL); }
#line 2502 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 227 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_FOR,
            kx_gen_stmt_object(KXST_FORCOND,
                (yyvsp[-6].obj),
                (yyvsp[-4].obj),
                (yyvsp[-2].obj) == NULL ? NULL : kx_gen_stmt_object(KXST_EXPR, (yyvsp[-2].obj), NULL, NULL)),
            (yyvsp[0].obj), NULL); }
#line 2513 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 234 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_FOR,
            kx_gen_stmt_object(KXST_FORCOND,
                kx_gen_stmt_object(KXST_EXPR, (yyvsp[-6].obj), NULL, NULL),
                (yyvsp[-4].obj),
                (yyvsp[-2].obj) == NULL ? NULL : kx_gen_stmt_object(KXST_EXPR, (yyvsp[-2].obj), NULL, NULL)),
            (yyvsp[0].obj), NULL); }
#line 2524 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 241 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_FOR,
            kx_gen_stmt_object(KXST_FORCOND,
                NULL,
                (yyvsp[-4].obj),
                (yyvsp[-2].obj) == NULL ? NULL : kx_gen_stmt_object(KXST_EXPR, (yyvsp[-2].obj), NULL, NULL)),
            (yyvsp[0].obj), NULL); }
#line 2535 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 250 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_TRY, (yyvsp[-2].obj), (yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2541 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 254 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2547 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 255 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_catch_object(KXST_CATCH, (yyvsp[-2].strval), (yyvsp[0].obj), NULL); }
#line 2553 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 259 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2559 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 260 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2565 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 264 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_break_object(KXST_BREAK, NULL)); }
#line 2571 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 265 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_break_object(KXST_BREAK, (yyvsp[-2].strval))); }
#line 2577 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 266 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_break_object(KXST_CONTINUE, NULL)); }
#line 2583 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 267 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_break_object(KXST_CONTINUE, (yyvsp[-2].strval))); }
#line 2589 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 271 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_stmt_object(KXST_RET, (yyvsp[-2].obj), NULL, NULL)); }
#line 2595 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 275 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_stmt_object(KXST_EXPR, (yyvsp[-2].obj), NULL, NULL)); }
#line 2601 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 279 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_YIELD, (yyvsp[0].obj)); }
#line 2607 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 280 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_YIELD, kx_gen_special_object(KXVL_NULL)); }
#line 2613 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 281 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-3].obj), kx_gen_uexpr_object(KXOP_YIELD, (yyvsp[0].obj))); }
#line 2619 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 282 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_uexpr_object(KXOP_YIELD, kx_gen_special_object(KXVL_NULL))); }
#line 2625 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 286 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[-1].obj), kx_gen_stmt_object(KXST_THROW, (yyvsp[-2].obj), NULL, NULL)); }
#line 2631 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 290 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2637 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 294 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_MIXIN, NULL, kx_gen_var_object((yyvsp[0].strval), KX_OBJ_T), NULL); }
#line 2643 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 295 "src/kinx.y" /* yacc.c:1646  */
    { kx_gen_stmt_object(KXST_MIXIN, (yyvsp[-2].obj), kx_gen_var_object((yyvsp[0].strval), KX_OBJ_T), NULL); }
#line 2649 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 299 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2655 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 303 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_EXPR, NULL, NULL, NULL); }
#line 2661 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 304 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_modifier((yyvsp[0].obj), kx_gen_stmt_object(KXST_EXPR, (yyvsp[-1].obj), NULL, NULL)); }
#line 2667 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 308 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2673 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 313 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 2679 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 314 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_IF, (yyvsp[-1].obj), NULL, NULL); }
#line 2685 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 319 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2691 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 320 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_SHL, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2697 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 321 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_SHR, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2703 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 322 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_ADD, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2709 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 323 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_SUB, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2715 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 324 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_MUL, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2721 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 325 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_DIV, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2727 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 326 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_MOD, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2733 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 327 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_AND, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2739 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 328 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_OR, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2745 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 329 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_XOR, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2751 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 330 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_LAND, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2757 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 331 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_LOR, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2763 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 332 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bassign_object(KXOP_ASSIGN, (yyvsp[-2].obj), kx_gen_bassign_object(KXOP_LUNDEF, (yyvsp[-2].obj), (yyvsp[0].obj))); }
#line 2769 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 341 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKOBJ, NULL); }
#line 2775 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 342 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object((yyvsp[0].type), (yyvsp[-1].obj)); }
#line 2781 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 343 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_IDX, (yyvsp[-3].obj), (yyvsp[-1].obj)); }
#line 2787 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 344 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_IDX, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2793 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 345 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_typeof_object((yyvsp[-2].obj), (yyvsp[0].intval)); }
#line 2799 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 346 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_CALL, (yyvsp[-3].obj), (yyvsp[-1].obj)); }
#line 2805 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 351 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_texpr_object((yyvsp[-4].obj), (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2811 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 361 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_LUNDEF, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2817 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 366 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_LOR, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2823 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 371 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_LAND, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2829 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 376 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_OR, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2835 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 381 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_XOR, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2841 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 386 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_AND, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2847 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 391 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_EQEQ, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2853 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 392 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_NEQ, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2859 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 397 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_LT, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2865 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 398 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_LE, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2871 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 399 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_GT, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2877 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 400 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_GE, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2883 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 401 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_LGE, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2889 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 406 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_SHL, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2895 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 407 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_SHR, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2901 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 412 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_ADD, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2907 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 413 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_SUB, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2913 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 418 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_MUL, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2919 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 419 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_DIV, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2925 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 420 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_MOD, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2931 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 425 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_POW, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2937 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 430 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_REGEQ, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2943 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 431 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_REGNE, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2949 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 436 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_NOT, (yyvsp[0].obj)); }
#line 2955 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 437 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_POSITIVE, (yyvsp[0].obj)); }
#line 2961 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 438 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_NEGATIVE, (yyvsp[0].obj)); }
#line 2967 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 439 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_CONV, (yyvsp[0].obj)); }
#line 2973 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 440 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_INC, (yyvsp[0].obj)); }
#line 2979 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 441 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_DEC, (yyvsp[0].obj)); }
#line 2985 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 446 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object((yyvsp[0].type), (yyvsp[-1].obj)); }
#line 2991 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 447 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_IDX, (yyvsp[-3].obj), (yyvsp[-1].obj)); }
#line 2997 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 448 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_IDX, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3003 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 449 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_typeof_object((yyvsp[-2].obj), (yyvsp[0].intval)); }
#line 3009 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 450 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_CALL, (yyvsp[-3].obj), (yyvsp[-1].obj)); }
#line 3015 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 454 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.type) = KXOP_INCP; }
#line 3021 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 455 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.type) = KXOP_DECP; }
#line 3027 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 459 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_int_object((yyvsp[0].intval)); }
#line 3033 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 460 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_dbl_object((yyvsp[0].dblval)); }
#line 3039 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 461 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_big_object((yyvsp[0].strval)); }
#line 3045 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 462 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_special_object(KXVL_NULL); }
#line 3051 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 463 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_var_object((yyvsp[0].strval), KX_UNKNOWN_T); }
#line 3057 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 464 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_special_object(KXVL_TRUE); }
#line 3063 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 465 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_special_object(KXVL_FALSE); }
#line 3069 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 470 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_import_object((yyvsp[-2].strval)); }
#line 3075 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 471 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 3081 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 472 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 3087 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 473 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object((yyvsp[-1].strval)); }
#line 3093 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 474 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_IDX, (yyvsp[0].obj), kx_gen_str_object("create")); }
#line 3099 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 475 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_IDX, kx_gen_var_object("this", KX_UNKNOWN_T), (yyvsp[0].obj)); }
#line 3105 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 476 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_typeof_object(kx_gen_var_object("this", KX_UNKNOWN_T), (yyvsp[0].intval)); }
#line 3111 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 480 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = (yyvsp[0].strval); }
#line 3117 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 481 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = kx_gen_typestr_object((yyvsp[0].intval)); }
#line 3123 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 485 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object((yyvsp[0].strval)); }
#line 3129 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 486 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("if"); }
#line 3135 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 487 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("else"); }
#line 3141 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 488 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("while"); }
#line 3147 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 489 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("do"); }
#line 3153 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 490 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("for"); }
#line 3159 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 491 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("try"); }
#line 3165 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 492 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("catch"); }
#line 3171 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 493 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("finally"); }
#line 3177 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 494 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("break"); }
#line 3183 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 495 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("continue"); }
#line 3189 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 496 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("switch"); }
#line 3195 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 497 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("case"); }
#line 3201 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 498 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("default"); }
#line 3207 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 499 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("new"); }
#line 3213 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 500 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("var"); }
#line 3219 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 501 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("const"); }
#line 3225 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 502 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("native"); }
#line 3231 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 503 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("function"); }
#line 3237 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 504 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("_function"); }
#line 3243 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 505 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("public"); }
#line 3249 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 506 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("private"); }
#line 3255 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 507 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("protectd"); }
#line 3261 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 508 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("class"); }
#line 3267 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 509 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("module"); }
#line 3273 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 510 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("return"); }
#line 3279 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 511 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("throw"); }
#line 3285 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 512 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("null"); }
#line 3291 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 513 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("true"); }
#line 3297 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 514 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("false"); }
#line 3303 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 515 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("import"); }
#line 3309 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 516 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object("using"); }
#line 3315 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 520 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKARY, NULL); }
#line 3321 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 521 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKARY, (yyvsp[-2].obj)); }
#line 3327 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 525 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKBIN, NULL); }
#line 3333 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 526 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKBIN, (yyvsp[-2].obj)); }
#line 3339 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 530 "src/kinx.y" /* yacc.c:1646  */
    { kx_make_bin_mode(); }
#line 3345 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 534 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKOBJ, (yyvsp[-2].obj)); }
#line 3351 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 538 "src/kinx.y" /* yacc.c:1646  */
    {}
#line 3357 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 544 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_SPREAD, (yyvsp[0].obj)); }
#line 3363 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 545 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3369 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 546 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-3].obj), kx_gen_uexpr_object(KXOP_SPREAD, (yyvsp[0].obj))); }
#line 3375 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 551 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRSEQ, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3381 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 556 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_MKOBJ, NULL); }
#line 3387 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 557 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRSEQ, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3393 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 558 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRSEQ, (yyvsp[-3].obj), kx_gen_uexpr_object(KXOP_MKOBJ, NULL)); }
#line 3399 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 563 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3405 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 567 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_keyvalue_object((yyvsp[-3].strval), (yyvsp[0].obj)); }
#line 3411 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 568 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_keyvalue_object((yyvsp[-2].strval), (yyvsp[0].obj)); }
#line 3417 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 569 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_keyvalue_object((yyvsp[-2].strval), (yyvsp[0].obj)); }
#line 3423 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 570 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_keyvalue_object(NULL, kx_gen_uexpr_object(KXOP_SPREAD, (yyvsp[0].obj))); }
#line 3429 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 574 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "if"; }
#line 3435 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 575 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "else"; }
#line 3441 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 576 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "while"; }
#line 3447 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 577 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "do"; }
#line 3453 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 578 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "for"; }
#line 3459 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 579 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "try"; }
#line 3465 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 580 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "catch"; }
#line 3471 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 581 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "finally"; }
#line 3477 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 582 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "break"; }
#line 3483 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 583 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "continue"; }
#line 3489 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 584 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "switch"; }
#line 3495 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 585 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "case"; }
#line 3501 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 586 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "new"; }
#line 3507 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 587 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "var"; }
#line 3513 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 588 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "const"; }
#line 3519 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 589 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "native"; }
#line 3525 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 590 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "function"; }
#line 3531 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 591 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "_function"; }
#line 3537 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 592 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "public"; }
#line 3543 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 593 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "private"; }
#line 3549 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 594 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "protectd"; }
#line 3555 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 595 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "class"; }
#line 3561 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 596 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "module"; }
#line 3567 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 597 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "return"; }
#line 3573 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 598 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "throw"; }
#line 3579 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 599 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "null"; }
#line 3585 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 600 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "true"; }
#line 3591 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 601 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "false"; }
#line 3597 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 602 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "import"; }
#line 3603 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 603 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = "using"; }
#line 3609 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 604 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = kx_gen_typestr_object((yyvsp[0].intval)); }
#line 3615 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 605 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = kx_gen_typeofstr_object((yyvsp[0].intval)); }
#line 3621 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 609 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_regex_object((yyvsp[0].strval), 0); }
#line 3627 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 610 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_regex_object((yyvsp[0].strval), 1); }
#line 3633 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 611 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_regex_object((yyvsp[0].strval), 0); }
#line 3639 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 615 "src/kinx.y" /* yacc.c:1646  */
    { kx_make_regex_mode('/'); }
#line 3645 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 619 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.strval) = (yyvsp[-1].strval); }
#line 3651 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 623 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 3657 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 624 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_add_const((yyvsp[-1].obj)); }
#line 3663 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 629 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3669 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 633 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_object((yyvsp[0].strval), KX_UNKNOWN_T), NULL); }
#line 3675 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 634 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_type_object((yyvsp[-3].strval), (yyvsp[-1].intval), (yyvsp[0].intval)), NULL); }
#line 3681 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 635 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_object((yyvsp[-2].strval), KX_UNKNOWN_T), (yyvsp[0].obj)); }
#line 3687 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 636 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_type_object((yyvsp[-5].strval), (yyvsp[-3].intval), (yyvsp[-2].intval)), (yyvsp[0].obj)); }
#line 3693 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 640 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_EXPR, (yyvsp[0].obj), NULL, NULL); }
#line 3699 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 641 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_stmt_object(KXST_EXPR, (yyvsp[0].obj), NULL, NULL); }
#line 3705 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 645 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_FUNCTION, (yyvsp[-4].strval), (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3711 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 646 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_SYSFUNC, (yyvsp[-4].strval), (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3717 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 647 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_NATIVE, (yyvsp[-5].intval), (yyvsp[-4].strval), (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3723 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 651 "src/kinx.y" /* yacc.c:1646  */
    { kx_make_native_mode(); }
#line 3729 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 655 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.intval) = KX_INT_T; }
#line 3735 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 656 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3741 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 660 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_FUNCTION, NULL, (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3747 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 661 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_SYSFUNC, NULL, (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3753 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 662 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_NATIVE, (yyvsp[-4].intval), NULL, (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3759 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 663 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_FUNCTION, NULL, (yyvsp[-3].obj), kx_gen_stmt_object(KXST_RET, (yyvsp[0].obj), NULL, NULL), NULL); }
#line 3765 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 664 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_FUNCTION, NULL, (yyvsp[-3].obj), (yyvsp[0].obj), NULL); }
#line 3771 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 665 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_FUNCTION, NULL, NULL, (yyvsp[0].obj), NULL); }
#line 3777 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 669 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_PUBLIC, (yyvsp[-4].strval), (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3783 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 670 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_PRIVATE, (yyvsp[-4].strval), (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3789 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 671 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_FUNCTION, KXFT_PROTECTED, (yyvsp[-4].strval), (yyvsp[-2].obj), (yyvsp[0].obj), NULL); }
#line 3795 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 675 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_CLASS, KXFT_CLASS, (yyvsp[-3].strval), (yyvsp[-2].obj), (yyvsp[0].obj), (yyvsp[-1].obj)); }
#line 3801 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 676 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_SYSCLASS, KXFT_CLASS, (yyvsp[-3].strval), (yyvsp[-2].obj), (yyvsp[0].obj), (yyvsp[-1].obj)); }
#line 3807 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 680 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_CLASS, KXFT_MODULE, (yyvsp[-1].strval), NULL, (yyvsp[0].obj), NULL); }
#line 3813 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 681 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_func_object(KXST_SYSCLASS, KXFT_MODULE, (yyvsp[-1].strval), NULL, (yyvsp[0].obj), NULL); }
#line 3819 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 685 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 3825 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 687 "src/kinx.y" /* yacc.c:1646  */
    {
            (yyval.obj) = kx_gen_bexpr_object(KXST_STMTLIST,
                kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_object("this", KX_UNKNOWN_T),
                    kx_gen_bexpr_object(KXOP_CALL, kx_gen_bexpr_object(KXOP_IDX, (yyvsp[-1].obj), kx_gen_str_object("create")), (yyvsp[0].obj))),
                kx_gen_bexpr_object(KXOP_DECL, kx_gen_var_object("super", KX_UNKNOWN_T),
                    kx_gen_bexpr_object(KXOP_CALL, kx_gen_bexpr_object(KXOP_IDX, kx_gen_var_object("System", KX_UNKNOWN_T), kx_gen_str_object("makeSuper")), kx_gen_var_object("this", KX_UNKNOWN_T)))
            );
        }
#line 3838 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 698 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 3844 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 699 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 3850 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 703 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 3856 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 709 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 3862 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 713 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_var_object((yyvsp[0].strval), KX_UNKNOWN_T); }
#line 3868 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 714 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_var_type_object((yyvsp[-3].strval), (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 3874 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 715 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_var_object((yyvsp[0].strval), KX_SPR_T); }
#line 3880 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 719 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[0].intval); }
#line 3886 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 720 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.intval) = KX_NFNC_T; }
#line 3892 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 724 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.intval) = KX_UNKNOWN_T; }
#line 3898 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 725 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3904 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 729 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 3910 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 730 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 3916 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 734 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = NULL; }
#line 3922 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 740 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_uexpr_object(KXOP_SPREAD, (yyvsp[0].obj)); }
#line 3928 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 741 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, (yyvsp[0].obj), (yyvsp[-2].obj)); }
#line 3934 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 742 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_bexpr_object(KXST_EXPRLIST, kx_gen_uexpr_object(KXOP_SPREAD, (yyvsp[0].obj)), (yyvsp[-3].obj)); }
#line 3940 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 748 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_str_object((yyvsp[0].strval)); }
#line 3946 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 752 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = kx_gen_var_object((yyvsp[0].strval), KX_UNKNOWN_T); }
#line 3952 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 753 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 3958 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 754 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 3964 "kx.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 755 "src/kinx.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 3970 "kx.tab.c" /* yacc.c:1646  */
    break;


#line 3974 "kx.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 758 "src/kinx.y" /* yacc.c:1906  */


int yyerror(const char *msg)
{
    ++g_yyerror;
    if (!kx_lexinfo.quiet) {
        if (kx_lexinfo.file) {
            return printf("Error: %s near the %s:%d\n", msg, kx_lexinfo.file, kx_lexinfo.line);
        } else {
            return printf("Error: %s near the <eval>:%d\n", msg, kx_lexinfo.line);
        }
    }
    return 0;
}

int kx_yyerror_line(const char *msg, const char* file, const int line)
{
    ++g_yyerror;
    if (!kx_lexinfo.quiet) {
        return printf("Error: %s near the %s:%d\n", msg, file, line);
    }
    return 0;
}

int kx_yyerror_line_fmt(const char *msg, const char* file, const int line, ...)
{
    ++g_yyerror;
    if (!kx_lexinfo.quiet) {
        va_list list;
        int r = printf("Error: ");
        va_start(list, line);
        r += vprintf(msg, list);
        va_end(list);
        r += printf(" near the %s:%d\n", file, line);
        return r;
    }
    return 0;
}

int kx_yywarning(const char *msg)
{
    ++g_yywarning;
    if (!kx_lexinfo.quiet) {
        if (kx_lexinfo.file) {
            return printf("Warning: %s near the %s:%d\n", msg, kx_lexinfo.file, kx_lexinfo.line);
        } else {
            return printf("Warning: %s near the <eval>:%d\n", msg, kx_lexinfo.line);
        }
    }
    return 0;
}