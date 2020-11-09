/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "html.y"

#include <stdio.h>

int yyerror(char* s);
extern int yylex(void);

#line 78 "html.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "html.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_O_HTML = 3,                     /* O_HTML  */
  YYSYMBOL_C_HTML = 4,                     /* C_HTML  */
  YYSYMBOL_O_HEAD = 5,                     /* O_HEAD  */
  YYSYMBOL_C_HEAD = 6,                     /* C_HEAD  */
  YYSYMBOL_O_BODY = 7,                     /* O_BODY  */
  YYSYMBOL_C_BODY = 8,                     /* C_BODY  */
  YYSYMBOL_O_FRAMESET = 9,                 /* O_FRAMESET  */
  YYSYMBOL_C_FRAMESET = 10,                /* C_FRAMESET  */
  YYSYMBOL_O_FRAME = 11,                   /* O_FRAME  */
  YYSYMBOL_O_NOFRAME = 12,                 /* O_NOFRAME  */
  YYSYMBOL_C_NOFRAME = 13,                 /* C_NOFRAME  */
  YYSYMBOL_O_FORM = 14,                    /* O_FORM  */
  YYSYMBOL_C_FORM = 15,                    /* C_FORM  */
  YYSYMBOL_O_INPUT = 16,                   /* O_INPUT  */
  YYSYMBOL_O_SELECT = 17,                  /* O_SELECT  */
  YYSYMBOL_C_SELECT = 18,                  /* C_SELECT  */
  YYSYMBOL_O_OPTION = 19,                  /* O_OPTION  */
  YYSYMBOL_C_OPTION = 20,                  /* C_OPTION  */
  YYSYMBOL_O_TABLE = 21,                   /* O_TABLE  */
  YYSYMBOL_C_TABLE = 22,                   /* C_TABLE  */
  YYSYMBOL_O_TR = 23,                      /* O_TR  */
  YYSYMBOL_C_TR = 24,                      /* C_TR  */
  YYSYMBOL_O_TD = 25,                      /* O_TD  */
  YYSYMBOL_C_TD = 26,                      /* C_TD  */
  YYSYMBOL_O_TH = 27,                      /* O_TH  */
  YYSYMBOL_C_TH = 28,                      /* C_TH  */
  YYSYMBOL_O_THEAD = 29,                   /* O_THEAD  */
  YYSYMBOL_C_THEAD = 30,                   /* C_THEAD  */
  YYSYMBOL_O_TBODY = 31,                   /* O_TBODY  */
  YYSYMBOL_C_TBODY = 32,                   /* C_TBODY  */
  YYSYMBOL_O_IMG = 33,                     /* O_IMG  */
  YYSYMBOL_O_A = 34,                       /* O_A  */
  YYSYMBOL_C_A = 35,                       /* C_A  */
  YYSYMBOL_O_LINK = 36,                    /* O_LINK  */
  YYSYMBOL_O_UL = 37,                      /* O_UL  */
  YYSYMBOL_C_UL = 38,                      /* C_UL  */
  YYSYMBOL_O_OL = 39,                      /* O_OL  */
  YYSYMBOL_C_OL = 40,                      /* C_OL  */
  YYSYMBOL_O_LI = 41,                      /* O_LI  */
  YYSYMBOL_C_LI = 42,                      /* C_LI  */
  YYSYMBOL_O_B = 43,                       /* O_B  */
  YYSYMBOL_C_B = 44,                       /* C_B  */
  YYSYMBOL_O_I = 45,                       /* O_I  */
  YYSYMBOL_C_I = 46,                       /* C_I  */
  YYSYMBOL_O_U = 47,                       /* O_U  */
  YYSYMBOL_C_U = 48,                       /* C_U  */
  YYSYMBOL_O_SMALL = 49,                   /* O_SMALL  */
  YYSYMBOL_C_SMALL = 50,                   /* C_SMALL  */
  YYSYMBOL_O_SUP = 51,                     /* O_SUP  */
  YYSYMBOL_C_SUP = 52,                     /* C_SUP  */
  YYSYMBOL_O_SUB = 53,                     /* O_SUB  */
  YYSYMBOL_C_SUB = 54,                     /* C_SUB  */
  YYSYMBOL_O_CENTER = 55,                  /* O_CENTER  */
  YYSYMBOL_C_CENTER = 56,                  /* C_CENTER  */
  YYSYMBOL_O_FONT = 57,                    /* O_FONT  */
  YYSYMBOL_C_FONT = 58,                    /* C_FONT  */
  YYSYMBOL_O_H1 = 59,                      /* O_H1  */
  YYSYMBOL_C_H1 = 60,                      /* C_H1  */
  YYSYMBOL_O_H2 = 61,                      /* O_H2  */
  YYSYMBOL_C_H2 = 62,                      /* C_H2  */
  YYSYMBOL_O_H3 = 63,                      /* O_H3  */
  YYSYMBOL_C_H3 = 64,                      /* C_H3  */
  YYSYMBOL_O_H4 = 65,                      /* O_H4  */
  YYSYMBOL_C_H4 = 66,                      /* C_H4  */
  YYSYMBOL_O_H5 = 67,                      /* O_H5  */
  YYSYMBOL_C_H5 = 68,                      /* C_H5  */
  YYSYMBOL_O_H6 = 69,                      /* O_H6  */
  YYSYMBOL_C_H6 = 70,                      /* C_H6  */
  YYSYMBOL_O_P = 71,                       /* O_P  */
  YYSYMBOL_C_P = 72,                       /* C_P  */
  YYSYMBOL_O_HR = 73,                      /* O_HR  */
  YYSYMBOL_O_BR = 74,                      /* O_BR  */
  YYSYMBOL_O_DIV = 75,                     /* O_DIV  */
  YYSYMBOL_C_DIV = 76,                     /* C_DIV  */
  YYSYMBOL_TEXT = 77,                      /* TEXT  */
  YYSYMBOL_YYACCEPT = 78,                  /* $accept  */
  YYSYMBOL_html_document = 79,             /* html_document  */
  YYSYMBOL_html_tag = 80,                  /* html_tag  */
  YYSYMBOL_html_content = 81,              /* html_content  */
  YYSYMBOL_head_tag = 82,                  /* head_tag  */
  YYSYMBOL_head_content = 83,              /* head_content  */
  YYSYMBOL_frameset_tag = 84,              /* frameset_tag  */
  YYSYMBOL_frameset_content = 85,          /* frameset_content  */
  YYSYMBOL_noframes_tag = 86,              /* noframes_tag  */
  YYSYMBOL_a_tag = 87,                     /* a_tag  */
  YYSYMBOL_a_content = 88,                 /* a_content  */
  YYSYMBOL_heading = 89,                   /* heading  */
  YYSYMBOL_h1_tag = 90,                    /* h1_tag  */
  YYSYMBOL_h2_tag = 91,                    /* h2_tag  */
  YYSYMBOL_h3_tag = 92,                    /* h3_tag  */
  YYSYMBOL_h4_tag = 93,                    /* h4_tag  */
  YYSYMBOL_h5_tag = 94,                    /* h5_tag  */
  YYSYMBOL_h6_tag = 95,                    /* h6_tag  */
  YYSYMBOL_b_tag = 96,                     /* b_tag  */
  YYSYMBOL_body_tag = 97,                  /* body_tag  */
  YYSYMBOL_body_content_list = 98,         /* body_content_list  */
  YYSYMBOL_body_content = 99,              /* body_content  */
  YYSYMBOL_block = 100,                    /* block  */
  YYSYMBOL_block_content = 101,            /* block_content  */
  YYSYMBOL_center_tag = 102,               /* center_tag  */
  YYSYMBOL_div_tag = 103,                  /* div_tag  */
  YYSYMBOL_form_tag = 104,                 /* form_tag  */
  YYSYMBOL_form_content = 105,             /* form_content  */
  YYSYMBOL_select_tag = 106,               /* select_tag  */
  YYSYMBOL_select_content = 107,           /* select_content  */
  YYSYMBOL_option_tag = 108,               /* option_tag  */
  YYSYMBOL_ol_tag = 109,                   /* ol_tag  */
  YYSYMBOL_li_tag = 110,                   /* li_tag  */
  YYSYMBOL_flow = 111,                     /* flow  */
  YYSYMBOL_flow_content = 112,             /* flow_content  */
  YYSYMBOL_p_tag = 113,                    /* p_tag  */
  YYSYMBOL_table_tag = 114,                /* table_tag  */
  YYSYMBOL_table_content = 115,            /* table_content  */
  YYSYMBOL_tr_tag = 116,                   /* tr_tag  */
  YYSYMBOL_table_cell = 117,               /* table_cell  */
  YYSYMBOL_td_tag = 118,                   /* td_tag  */
  YYSYMBOL_th_tag = 119,                   /* th_tag  */
  YYSYMBOL_ul_tag = 120,                   /* ul_tag  */
  YYSYMBOL_text = 121,                     /* text  */
  YYSYMBOL_text_content = 122,             /* text_content  */
  YYSYMBOL_physical_style = 123,           /* physical_style  */
  YYSYMBOL_font_tag = 124,                 /* font_tag  */
  YYSYMBOL_i_tag = 125,                    /* i_tag  */
  YYSYMBOL_small_tag = 126,                /* small_tag  */
  YYSYMBOL_sub_tag = 127,                  /* sub_tag  */
  YYSYMBOL_sup_tag = 128,                  /* sup_tag  */
  YYSYMBOL_u_tag = 129                     /* u_tag  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   390

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   332


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    87,    87,    91,    95,    96,   100,   101,   105,   109,
     110,   114,   115,   119,   120,   124,   125,   129,   130,   134,
     135,   136,   137,   138,   139,   143,   147,   151,   155,   159,
     163,   167,   171,   172,   176,   177,   181,   182,   183,   184,
     188,   189,   193,   194,   195,   196,   197,   198,   199,   203,
     207,   211,   212,   216,   217,   218,   222,   223,   227,   231,
     235,   236,   240,   241,   242,   246,   247,   251,   252,   256,
     257,   261,   262,   266,   267,   268,   272,   273,   277,   278,
     282,   286,   290,   294,   295,   299,   300,   301,   302,   306,
     307,   308,   309,   310,   311,   312,   316,   320,   324,   328,
     332,   335
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "O_HTML", "C_HTML",
  "O_HEAD", "C_HEAD", "O_BODY", "C_BODY", "O_FRAMESET", "C_FRAMESET",
  "O_FRAME", "O_NOFRAME", "C_NOFRAME", "O_FORM", "C_FORM", "O_INPUT",
  "O_SELECT", "C_SELECT", "O_OPTION", "C_OPTION", "O_TABLE", "C_TABLE",
  "O_TR", "C_TR", "O_TD", "C_TD", "O_TH", "C_TH", "O_THEAD", "C_THEAD",
  "O_TBODY", "C_TBODY", "O_IMG", "O_A", "C_A", "O_LINK", "O_UL", "C_UL",
  "O_OL", "C_OL", "O_LI", "C_LI", "O_B", "C_B", "O_I", "C_I", "O_U", "C_U",
  "O_SMALL", "C_SMALL", "O_SUP", "C_SUP", "O_SUB", "C_SUB", "O_CENTER",
  "C_CENTER", "O_FONT", "C_FONT", "O_H1", "C_H1", "O_H2", "C_H2", "O_H3",
  "C_H3", "O_H4", "C_H4", "O_H5", "C_H5", "O_H6", "C_H6", "O_P", "C_P",
  "O_HR", "O_BR", "O_DIV", "C_DIV", "TEXT", "$accept", "html_document",
  "html_tag", "html_content", "head_tag", "head_content", "frameset_tag",
  "frameset_content", "noframes_tag", "a_tag", "a_content", "heading",
  "h1_tag", "h2_tag", "h3_tag", "h4_tag", "h5_tag", "h6_tag", "b_tag",
  "body_tag", "body_content_list", "body_content", "block",
  "block_content", "center_tag", "div_tag", "form_tag", "form_content",
  "select_tag", "select_content", "option_tag", "ol_tag", "li_tag", "flow",
  "flow_content", "p_tag", "table_tag", "table_content", "tr_tag",
  "table_cell", "td_tag", "th_tag", "ul_tag", "text", "text_content",
  "physical_style", "font_tag", "i_tag", "small_tag", "sub_tag", "sup_tag",
  "u_tag", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332
};
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    12,    33,   -83,     0,    41,    32,   -83,   -83,   -83,
      40,   -83,    76,    -1,   -83,   -83,   -83,   -83,   259,   -15,
     -83,    14,    10,   -36,   204,   204,   204,   204,   204,   204,
     315,   204,   204,   204,   204,   204,   204,   204,   141,   -83,
     -83,   315,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   134,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   197,    42,   -83,   -83,   -83,    25,   -83,
      35,   -83,   -83,    13,    30,    30,    47,   -83,   -83,    27,
     -83,   -83,    21,    44,   -83,    49,    36,    45,    39,    43,
      46,    48,    38,    53,    52,    37,    50,    34,    54,    31,
     -83,    56,    28,   -83,   -83,   -83,    90,   -83,   -83,    29,
      87,   -83,   -83,   -83,   315,   315,    92,   -83,   -83,    88,
      85,   -83,   -83,   -83,    78,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   104,   -83,   100,   102,
     -83,   101,   -83,    10,   -83,   -83,   -83,    30,   -83,   106,
     -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     0,     1,     7,     8,
       0,     3,     0,     0,     5,     4,     6,    33,     0,     0,
      86,     0,    64,     0,    84,    84,    84,    84,    84,    84,
      41,    84,    84,    84,    84,    84,    84,    84,     0,    36,
      85,    41,    87,    38,    19,    20,    21,    22,    23,    24,
      89,     0,    34,    37,    40,    42,    43,    44,    45,    46,
      47,    48,    39,    83,    88,    90,    91,    92,    93,    94,
      95,    10,    11,     0,     0,    12,    52,    53,     0,    54,
       0,    55,    72,     0,     0,     0,     0,    75,    16,     0,
      17,    18,    41,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,     0,    32,    35,    14,     0,     9,    57,     0,
       0,    58,    51,    77,    41,    41,     0,    78,    79,     0,
       0,    71,    15,    67,     0,    65,    68,    82,    60,    31,
      97,   101,    98,   100,    99,    49,    96,    25,    26,    27,
      28,    29,    30,    69,    50,    13,     0,    56,     0,     0,
      76,     0,    74,    62,    59,    80,    81,     0,    63,     0,
      73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   113,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -17,    60,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -23,   -83,   -83,   -83,   -83,   -83,   -82,   -83,
     -83,   -83,   -83,    -6,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    10,    14,    74,    75,    42,
      89,    43,    44,    45,    46,    47,    48,    49,    50,    15,
      51,    52,    53,    54,    55,    56,    57,    80,    81,   120,
     121,    58,    93,   134,   135,    59,    60,    86,    87,   126,
     127,   128,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      95,    79,   129,   130,    94,    92,     8,    82,    83,    71,
      72,    73,     1,   102,    84,    91,    85,     4,    96,    97,
      98,    99,   100,   101,   112,   103,   104,   105,   106,   107,
     108,   109,   111,     7,   114,    18,     9,   123,   124,    12,
     125,    13,    19,   118,   119,    11,    16,    20,    21,    88,
     122,    92,   117,    83,    20,    21,   116,    24,    22,    25,
      23,    26,   132,    27,    24,    28,    25,    29,    26,   131,
      27,    31,    28,    32,    29,    33,    30,    34,    31,    35,
     139,    36,   137,    37,    17,   169,   136,   141,    40,   138,
      18,   140,    38,   142,   145,    40,    41,    19,   143,   148,
     150,   152,   144,   155,   154,   157,   156,   158,   159,    20,
      21,   146,   147,    22,   149,    23,   160,   162,   161,    24,
     163,    25,   151,    26,   164,    27,   165,    28,   153,    29,
     166,    30,   167,    31,    90,    32,     0,    33,   170,    34,
     168,    35,   113,    36,     0,    37,     0,    38,    18,    39,
      40,    41,   133,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,    22,     0,    23,    20,    21,     0,    24,     0,    25,
       0,    26,     0,    27,    24,    28,    25,    29,    26,    30,
      27,    31,    28,    32,    29,    33,     0,    34,    31,    35,
       0,    36,     0,    37,     0,    38,     0,    39,    40,    41,
     115,    18,     0,   110,     0,    40,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,     0,     0,    22,     0,    23,    20,    21,     0,
      24,     0,    25,     0,    26,     0,    27,    24,    28,    25,
      29,    26,    30,    27,    31,    28,    32,    29,    33,     0,
      34,    31,    35,     0,    36,     0,    37,     0,    38,     0,
      39,    40,    41,    18,    76,    77,    78,     0,    40,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,     0,     0,    22,     0,    23,     0,
       0,     0,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,    18,
      38,     0,    39,    40,    41,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
       0,     0,    22,     0,    23,     0,     0,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,    40,
      41
};

static const yytype_int16 yycheck[] =
{
      23,    18,    84,    85,    40,    41,     6,    22,    23,    10,
      11,    12,     3,    30,    29,    21,    31,     5,    24,    25,
      26,    27,    28,    29,    41,    31,    32,    33,    34,    35,
      36,    37,    38,     0,    51,    14,    36,    24,    25,     7,
      27,     9,    21,    18,    19,     4,     6,    33,    34,    35,
      15,    41,    10,    23,    33,    34,    73,    43,    37,    45,
      39,    47,    35,    49,    43,    51,    45,    53,    47,    22,
      49,    57,    51,    59,    53,    61,    55,    63,    57,    65,
      44,    67,    38,    69,     8,   167,    92,    48,    74,    40,
      14,    46,    71,    50,    56,    74,    75,    21,    52,    62,
      66,    70,    54,    13,    76,    18,    77,   124,   125,    33,
      34,    58,    60,    37,    64,    39,    24,    32,    30,    43,
      42,    45,    68,    47,    20,    49,    26,    51,    72,    53,
      28,    55,    31,    57,    21,    59,    -1,    61,    32,    63,
     163,    65,     8,    67,    -1,    69,    -1,    71,    14,    73,
      74,    75,    92,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    39,    33,    34,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    43,    51,    45,    53,    47,    55,
      49,    57,    51,    59,    53,    61,    -1,    63,    57,    65,
      -1,    67,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      13,    14,    -1,    72,    -1,    74,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    -1,    39,    33,    34,    -1,
      43,    -1,    45,    -1,    47,    -1,    49,    43,    51,    45,
      53,    47,    55,    49,    57,    51,    59,    53,    61,    -1,
      63,    57,    65,    -1,    67,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    14,    15,    16,    17,    -1,    74,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,
      61,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    14,
      71,    -1,    73,    74,    75,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    43,    -1,
      45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,    74,
      75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    79,    80,     5,    81,    82,     0,     6,    36,
      83,     4,     7,     9,    84,    97,     6,     8,    14,    21,
      33,    34,    37,    39,    43,    45,    47,    49,    51,    53,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      74,    75,    87,    89,    90,    91,    92,    93,    94,    95,
      96,    98,    99,   100,   101,   102,   103,   104,   109,   113,
     114,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    10,    11,    12,    85,    86,    15,    16,    17,    99,
     105,   106,    22,    23,    29,    31,   115,   116,    35,    88,
      89,   121,    41,   110,    40,   110,   121,   121,   121,   121,
     121,   121,    99,   121,   121,   121,   121,   121,   121,   121,
      72,   121,    99,     8,    99,    13,    99,    10,    18,    19,
     107,   108,    15,    24,    25,    27,   117,   118,   119,   116,
     116,    22,    35,   100,   111,   112,   121,    38,    40,    44,
      46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
      66,    68,    70,    72,    76,    13,    77,    18,    99,    99,
      24,    30,    32,    42,    20,    26,    28,    31,   110,   116,
      32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    80,    81,    81,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   102,
     103,   104,   104,   105,   105,   105,   106,   106,   107,   108,
     109,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   119,   120,   121,   121,   122,   122,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   124,   125,   126,   127,
     128,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     3,     2,     1,     3,
       2,     1,     1,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     2,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     2,     1,     1,     1,     3,     2,     1,     3,
       3,     2,     3,     4,     0,     1,     0,     1,     1,     3,
       2,     3,     2,     6,     3,     1,     3,     2,     1,     1,
       3,     3,     3,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1376 "html.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 337 "html.y"

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  

