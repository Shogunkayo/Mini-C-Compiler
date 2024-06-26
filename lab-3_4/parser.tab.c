/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#define YYSTYPE char*

	#include "sym_table.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char *s);
	int yylex();

	extern int yylineno;
	extern char *yytext;
	int type = -1;
	int scope = 0;
	int err = 0;


#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_ENUM = 8,                       /* ENUM  */
  YYSYMBOL_STRUCT = 9,                     /* STRUCT  */
  YYSYMBOL_UNION = 10,                     /* UNION  */
  YYSYMBOL_SHORT = 11,                     /* SHORT  */
  YYSYMBOL_LONG = 12,                      /* LONG  */
  YYSYMBOL_SIGNED = 13,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 14,                  /* UNSIGNED  */
  YYSYMBOL_AUTO = 15,                      /* AUTO  */
  YYSYMBOL_STATIC = 16,                    /* STATIC  */
  YYSYMBOL_EXTERN = 17,                    /* EXTERN  */
  YYSYMBOL_VOLATILE = 18,                  /* VOLATILE  */
  YYSYMBOL_CONST = 19,                     /* CONST  */
  YYSYMBOL_REGISTER = 20,                  /* REGISTER  */
  YYSYMBOL_GOTO = 21,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 22,                    /* SIZEOF  */
  YYSYMBOL_TYPEDEF = 23,                   /* TYPEDEF  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_DO = 26,                        /* DO  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_IF = 28,                        /* IF  */
  YYSYMBOL_ELSE = 29,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 30,                    /* ELSEIF  */
  YYSYMBOL_SWITCH = 31,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 32,                   /* DEFAULT  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_INCLUDE = 34,                   /* INCLUDE  */
  YYSYMBOL_DEFINE = 35,                    /* DEFINE  */
  YYSYMBOL_UNDEF = 36,                     /* UNDEF  */
  YYSYMBOL_IFDEF = 37,                     /* IFDEF  */
  YYSYMBOL_IFNDEF = 38,                    /* IFNDEF  */
  YYSYMBOL_PPIF = 39,                      /* PPIF  */
  YYSYMBOL_PPELSE = 40,                    /* PPELSE  */
  YYSYMBOL_ENDIF = 41,                     /* ENDIF  */
  YYSYMBOL_HEADER = 42,                    /* HEADER  */
  YYSYMBOL_MAIN = 43,                      /* MAIN  */
  YYSYMBOL_RETURN = 44,                    /* RETURN  */
  YYSYMBOL_CHARACTER = 45,                 /* CHARACTER  */
  YYSYMBOL_ID = 46,                        /* ID  */
  YYSYMBOL_INTEGER = 47,                   /* INTEGER  */
  YYSYMBOL_NUM = 48,                       /* NUM  */
  YYSYMBOL_STRLITERAL = 49,                /* STRLITERAL  */
  YYSYMBOL_DOT = 50,                       /* DOT  */
  YYSYMBOL_STRUCTPOINT = 51,               /* STRUCTPOINT  */
  YYSYMBOL_SINQUOTE = 52,                  /* SINQUOTE  */
  YYSYMBOL_INC = 53,                       /* INC  */
  YYSYMBOL_DEC = 54,                       /* DEC  */
  YYSYMBOL_SFTLEFT = 55,                   /* SFTLEFT  */
  YYSYMBOL_SFTRIGHT = 56,                  /* SFTRIGHT  */
  YYSYMBOL_SHORTADD = 57,                  /* SHORTADD  */
  YYSYMBOL_SHORTMUL = 58,                  /* SHORTMUL  */
  YYSYMBOL_SHORTDIV = 59,                  /* SHORTDIV  */
  YYSYMBOL_SHORTSUB = 60,                  /* SHORTSUB  */
  YYSYMBOL_SHORTMOD = 61,                  /* SHORTMOD  */
  YYSYMBOL_LESSER = 62,                    /* LESSER  */
  YYSYMBOL_LESSEREQ = 63,                  /* LESSEREQ  */
  YYSYMBOL_GREATER = 64,                   /* GREATER  */
  YYSYMBOL_GREATEREQ = 65,                 /* GREATEREQ  */
  YYSYMBOL_EQCOMP = 66,                    /* EQCOMP  */
  YYSYMBOL_NOTEQ = 67,                     /* NOTEQ  */
  YYSYMBOL_68_ = 68,                       /* ';'  */
  YYSYMBOL_69_ = 69,                       /* '('  */
  YYSYMBOL_70_ = 70,                       /* ')'  */
  YYSYMBOL_71_ = 71,                       /* '{'  */
  YYSYMBOL_72_ = 72,                       /* '}'  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_74_ = 74,                       /* '*'  */
  YYSYMBOL_75_ = 75,                       /* '['  */
  YYSYMBOL_76_ = 76,                       /* ']'  */
  YYSYMBOL_77_ = 77,                       /* '='  */
  YYSYMBOL_78_ = 78,                       /* '+'  */
  YYSYMBOL_79_ = 79,                       /* '-'  */
  YYSYMBOL_80_ = 80,                       /* '/'  */
  YYSYMBOL_81_ = 81,                       /* '!'  */
  YYSYMBOL_82_ = 82,                       /* '&'  */
  YYSYMBOL_83_ = 83,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_Start = 85,                     /* Start  */
  YYSYMBOL_Prog = 86,                      /* Prog  */
  YYSYMBOL_Type = 87,                      /* Type  */
  YYSYMBOL_TypeSpecifier = 88,             /* TypeSpecifier  */
  YYSYMBOL_TypeList = 89,                  /* TypeList  */
  YYSYMBOL_Main = 90,                      /* Main  */
  YYSYMBOL_91_1 = 91,                      /* $@1  */
  YYSYMBOL_MainArg1 = 92,                  /* MainArg1  */
  YYSYMBOL_MainArg2 = 93,                  /* MainArg2  */
  YYSYMBOL_MainArg3 = 94,                  /* MainArg3  */
  YYSYMBOL_SnglStmt = 95,                  /* SnglStmt  */
  YYSYMBOL_IfSnglStmt = 96,                /* IfSnglStmt  */
  YYSYMBOL_StmtList = 97,                  /* StmtList  */
  YYSYMBOL_98_2 = 98,                      /* $@2  */
  YYSYMBOL_VarDeclr = 99,                  /* VarDeclr  */
  YYSYMBOL_VarList = 100,                  /* VarList  */
  YYSYMBOL_101_3 = 101,                    /* $@3  */
  YYSYMBOL_102_4 = 102,                    /* $@4  */
  YYSYMBOL_VarInit = 103,                  /* VarInit  */
  YYSYMBOL_IncDec = 104,                   /* IncDec  */
  YYSYMBOL_Expr = 105,                     /* Expr  */
  YYSYMBOL_E = 106,                        /* E  */
  YYSYMBOL_T = 107,                        /* T  */
  YYSYMBOL_F = 108,                        /* F  */
  YYSYMBOL_Number = 109,                   /* Number  */
  YYSYMBOL_Condition = 110,                /* Condition  */
  YYSYMBOL_Logical = 111,                  /* Logical  */
  YYSYMBOL_Relop = 112,                    /* Relop  */
  YYSYMBOL_IfCond = 113,                   /* IfCond  */
  YYSYMBOL_114_5 = 114,                    /* $@5  */
  YYSYMBOL_115_6 = 115,                    /* $@6  */
  YYSYMBOL_ElseCond = 116,                 /* ElseCond  */
  YYSYMBOL_117_7 = 117,                    /* $@7  */
  YYSYMBOL_118_8 = 118                     /* $@8  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


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
       2,     2,     2,    81,     2,     2,     2,     2,    82,     2,
      69,    70,    74,    78,    73,    79,     2,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    68,
       2,    77,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    83,    72,     2,     2,     2,     2,
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
      65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    38,    39,    40,    41,    42,    43,    45,
      46,    47,    48,    49,    51,    52,    53,    54,    55,    56,
      58,    59,    60,    62,    62,    64,    65,    66,    68,    69,
      70,    71,    72,    74,    75,    76,    78,    79,    80,    81,
      83,    84,    85,    87,    88,    88,    89,    91,    93,    93,
     102,   102,   118,   127,   143,   160,   161,   183,   184,   185,
     209,   210,   211,   212,   214,   215,   217,   228,   239,   241,
     252,   263,   265,   266,   277,   278,   279,   280,   281,   282,
     283,   285,   286,   287,   288,   289,   290,   292,   293,   295,
     296,   298,   299,   300,   301,   302,   303,   305,   306,   306,
     306,   308,   309,   309,   309,   310
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "FLOAT",
  "CHAR", "DOUBLE", "ENUM", "STRUCT", "UNION", "SHORT", "LONG", "SIGNED",
  "UNSIGNED", "AUTO", "STATIC", "EXTERN", "VOLATILE", "CONST", "REGISTER",
  "GOTO", "SIZEOF", "TYPEDEF", "WHILE", "FOR", "DO", "BREAK", "IF", "ELSE",
  "ELSEIF", "SWITCH", "DEFAULT", "CASE", "INCLUDE", "DEFINE", "UNDEF",
  "IFDEF", "IFNDEF", "PPIF", "PPELSE", "ENDIF", "HEADER", "MAIN", "RETURN",
  "CHARACTER", "ID", "INTEGER", "NUM", "STRLITERAL", "DOT", "STRUCTPOINT",
  "SINQUOTE", "INC", "DEC", "SFTLEFT", "SFTRIGHT", "SHORTADD", "SHORTMUL",
  "SHORTDIV", "SHORTSUB", "SHORTMOD", "LESSER", "LESSEREQ", "GREATER",
  "GREATEREQ", "EQCOMP", "NOTEQ", "';'", "'('", "')'", "'{'", "'}'", "','",
  "'*'", "'['", "']'", "'='", "'+'", "'-'", "'/'", "'!'", "'&'", "'|'",
  "$accept", "Start", "Prog", "Type", "TypeSpecifier", "TypeList", "Main",
  "$@1", "MainArg1", "MainArg2", "MainArg3", "SnglStmt", "IfSnglStmt",
  "StmtList", "$@2", "VarDeclr", "VarList", "$@3", "$@4", "VarInit",
  "IncDec", "Expr", "E", "T", "F", "Number", "Condition", "Logical",
  "Relop", "IfCond", "$@5", "$@6", "ElseCond", "$@7", "$@8", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      97,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,   163,   -15,  -104,    33,  -104,   163,   187,    19,    97,
    -104,    97,    97,  -104,  -104,  -104,     1,  -104,  -104,  -104,
      -1,    37,    26,    17,    39,   117,  -104,    56,  -104,     7,
     -42,    65,  -104,   -37,  -104,  -104,    96,   103,  -104,   108,
    -104,    32,    61,    20,   118,     7,    91,    98,    99,   127,
      55,    50,    13,  -104,  -104,  -104,   101,   124,   108,  -104,
    -104,   -40,  -104,  -104,    58,   113,     7,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,   108,   -14,  -104,  -104,  -104,
    -104,  -104,  -104,    55,  -104,  -104,  -104,  -104,  -104,  -104,
     127,   127,   127,   127,   127,   109,   111,   125,  -104,    55,
     106,   114,   108,  -104,   126,   129,  -104,    90,    50,    13,
      13,  -104,  -104,   128,   194,     3,  -104,  -104,  -104,  -104,
    -104,   118,  -104,   130,   194,   133,  -104,  -104,  -104,   173,
     136,  -104,  -104,  -104,  -104,   -31,     7,    79,  -104,  -104,
     118,   134,   164,  -104,  -104,  -104,  -104,   135,  -104,   140,
       7,  -104,   173,  -104,  -104,   141,  -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,    13,     9,    11,    10,    12,    18,    15,    16,
      17,    19,     0,     7,     0,     2,    22,     0,     0,     0,
      14,     0,     0,     1,    20,    21,     0,     5,     3,     4,
      27,     0,     0,    26,     0,    32,    23,     0,    25,    46,
       0,     0,    74,    73,    84,    81,     0,     0,    39,     0,
      44,     0,     0,     0,     0,    46,     0,     0,     0,    57,
      55,    65,    68,    71,    72,    38,     0,     0,     0,    60,
      61,     0,    62,    63,    88,     0,    46,    85,    82,    86,
      83,    79,    76,    77,    78,     0,    52,    47,    43,    24,
      36,    37,    73,    58,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,    31,     0,    59,    56,
       0,     0,     0,    75,     0,     0,    48,     0,    64,    66,
      67,    69,    70,    30,    35,     0,    89,    90,    87,    45,
      80,     0,    54,    53,    35,     0,    28,    42,    98,   105,
       0,    41,    49,    50,    29,     0,    46,     0,    97,    40,
       0,     0,     0,    99,   102,   101,    51,     0,    33,     0,
      46,    34,   105,   103,   100,     0,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,    23,   197,    95,    73,  -104,  -104,  -104,  -104,
      81,  -104,    69,   -55,  -104,  -104,  -103,  -104,  -104,   -48,
    -104,   -41,   119,    44,    48,  -104,   -66,  -104,  -104,   -89,
    -104,  -104,    59,  -104,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    14,    15,    16,    17,    54,    19,    39,    32,    38,
     136,    55,   139,    56,    76,    57,    87,   131,   150,    58,
      59,    60,    61,    62,    63,    64,    75,   112,   100,    65,
     146,   159,   148,   160,   165
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    74,   107,    31,    66,    42,    92,    44,    45,   108,
       2,     3,     4,     5,     6,   151,    69,    70,    93,   115,
      74,   114,     7,     8,     9,    10,    11,    21,   142,    49,
     109,    41,    67,    23,    22,    41,   141,    74,    51,    52,
      71,    53,    27,   152,    28,    29,   128,   156,    42,    43,
      44,    45,    42,    43,    44,    45,    46,    47,   141,   116,
      46,    47,    26,   117,    74,    81,    82,    83,    84,   133,
      30,   137,    49,    18,   138,    48,    49,   140,    50,    77,
      78,    51,    52,    33,    53,    51,    52,   103,    53,    85,
      35,   153,    18,   104,    18,    18,    34,    -8,     1,   140,
       2,     3,     4,     5,     6,   163,    20,    41,    79,    80,
      36,    24,     7,     8,     9,    10,    11,    94,    95,    96,
      97,    98,    99,    37,    42,    43,    44,    45,   101,   102,
      40,    12,    46,    47,    68,    42,    43,    44,    45,   132,
     110,   111,    72,    46,    47,   119,   120,   137,    49,    73,
     154,   121,   122,    42,    43,    44,    45,    51,    52,    49,
      53,    46,    47,    89,    86,    13,    90,    91,    51,    52,
     106,    53,    42,    92,    44,    45,   105,    49,     7,     8,
       9,    10,    11,   113,   124,   123,    51,    52,   126,    53,
       2,     3,     4,     5,     6,   125,    49,   127,   129,   130,
     135,   134,   147,   143,   149,    51,    52,   145,    53,   157,
     158,   161,   162,   166,    25,   144,   155,     0,     0,   118,
       0,   164
};

static const yytype_int16 yycheck[] =
{
      55,    49,    68,     4,    46,    45,    46,    47,    48,    49,
       3,     4,     5,     6,     7,    46,    53,    54,    59,    85,
      68,    76,    15,    16,    17,    18,    19,    42,   131,    69,
      71,    28,    74,     0,    49,    28,   125,    85,    78,    79,
      77,    81,    19,    74,    21,    22,   112,   150,    45,    46,
      47,    48,    45,    46,    47,    48,    53,    54,   147,    73,
      53,    54,    43,    77,   112,    45,    46,    47,    48,   117,
      69,    68,    69,     0,    71,    68,    69,   125,    71,    47,
      48,    78,    79,    46,    81,    78,    79,    74,    81,    69,
      73,   146,    19,    80,    21,    22,    70,     0,     1,   147,
       3,     4,     5,     6,     7,   160,    11,    28,    47,    48,
      71,    16,    15,    16,    17,    18,    19,    62,    63,    64,
      65,    66,    67,     6,    45,    46,    47,    48,    78,    79,
      74,    34,    53,    54,    69,    45,    46,    47,    48,    49,
      82,    83,    46,    53,    54,   101,   102,    68,    69,    46,
      71,   103,   104,    45,    46,    47,    48,    78,    79,    69,
      81,    53,    54,    72,    46,    68,    68,    68,    78,    79,
      46,    81,    45,    46,    47,    48,    75,    69,    15,    16,
      17,    18,    19,    70,    73,    76,    78,    79,    82,    81,
       3,     4,     5,     6,     7,    70,    69,    83,    72,    70,
       6,    73,    29,    73,    68,    78,    79,    74,    81,    75,
      46,    76,    72,    72,    17,   134,   147,    -1,    -1,   100,
      -1,   162
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,    15,    16,    17,
      18,    19,    34,    68,    85,    86,    87,    88,    89,    90,
      88,    42,    49,     0,    88,    87,    43,    86,    86,    86,
      69,     4,    92,    46,    70,    73,    71,     6,    93,    91,
      74,    28,    45,    46,    47,    48,    53,    54,    68,    69,
      71,    78,    79,    81,    89,    95,    97,    99,   103,   104,
     105,   106,   107,   108,   109,   113,    46,    74,    69,    53,
      54,    77,    46,    46,   103,   110,    98,    47,    48,    47,
      48,    45,    46,    47,    48,    69,    46,   100,    97,    72,
      68,    68,    46,   105,    62,    63,    64,    65,    66,    67,
     112,    78,    79,    74,    80,    75,    46,   110,    49,   105,
      82,    83,   111,    70,    97,   110,    73,    77,   106,   107,
     107,   108,   108,    76,    73,    70,    82,    83,   110,    72,
      70,   101,    49,   103,    73,     6,    94,    68,    71,    96,
     103,   113,   100,    73,    94,    74,   114,    29,   116,    68,
     102,    46,    74,    97,    71,    96,   100,    75,    46,   115,
     117,    76,    72,    97,   116,   118,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    84,    85,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    91,    90,    92,    92,    92,    93,    93,
      93,    93,    93,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    97,    98,    97,    97,    99,   101,   100,
     102,   100,   100,   100,   100,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   107,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112,   112,   112,   112,   112,   113,   114,   115,
     113,   116,   117,   118,   116,   116
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     2,     1,     0,     9,     4,     2,     0,     6,     7,
       5,     4,     0,     4,     5,     0,     2,     2,     1,     1,
       2,     1,     1,     2,     0,     4,     0,     2,     0,     4,
       0,     6,     1,     3,     3,     1,     3,     1,     2,     3,
       2,     2,     2,     2,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     3,     2,     2,     2,     2,
       4,     1,     2,     2,     1,     2,     2,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     6,     0,     0,
      10,     2,     0,     0,     6,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 9: /* Type: INT  */
#line 45 "parser.y"
                        { type = SYM_TABLE_INT; }
#line 1330 "parser.tab.c"
    break;

  case 10: /* Type: CHAR  */
#line 46 "parser.y"
                        { type = SYM_TABLE_CHAR; }
#line 1336 "parser.tab.c"
    break;

  case 11: /* Type: FLOAT  */
#line 47 "parser.y"
                        { type = SYM_TABLE_FLOAT; }
#line 1342 "parser.tab.c"
    break;

  case 12: /* Type: DOUBLE  */
#line 48 "parser.y"
                        { type = SYM_TABLE_DOUBLE; }
#line 1348 "parser.tab.c"
    break;

  case 13: /* Type: VOID  */
#line 49 "parser.y"
                        { type = SYM_TABLE_VOID; }
#line 1354 "parser.tab.c"
    break;

  case 23: /* $@1: %empty  */
#line 62 "parser.y"
                                         { scope++; }
#line 1360 "parser.tab.c"
    break;

  case 24: /* Main: TypeList MAIN '(' MainArg1 ')' '{' $@1 StmtList '}'  */
#line 62 "parser.y"
                                                                   { scope--; }
#line 1366 "parser.tab.c"
    break;

  case 44: /* $@2: %empty  */
#line 88 "parser.y"
                      { scope++; }
#line 1372 "parser.tab.c"
    break;

  case 45: /* StmtList: '{' $@2 StmtList '}'  */
#line 88 "parser.y"
                                                { scope--; }
#line 1378 "parser.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 93 "parser.y"
                {
	   	if (check_symbol(yyvsp[-1], scope)) {
			printf("Variable %s already declared\n", yyvsp[-1]);
			yyerror(yyvsp[-1]);
		}
		else {
			put_symbol(yyvsp[-1], get_size(type), type, yylineno, scope);
		}
	   }
#line 1392 "parser.tab.c"
    break;

  case 50: /* $@4: %empty  */
#line 102 "parser.y"
                                {
	   	if (check_symbol(yyvsp[-3], scope)) {
			printf("Variable %s already declared\n", yyvsp[-3]);
			yyerror(yyvsp[-3]);
		}
		else {
			put_symbol(yyvsp[-3], get_size(type), type, yylineno, scope);
			yyvsp[-1] = type_correction(type, yyvsp[-1]);
			if (yyvsp[-1] == NULL) {
				printf("%s cannot be cast to type %d\n", yyvsp[-1], type);
				yyerror(yyvsp[-1]);
				sprintf(yyvsp[-1], "~");
			}
			insert_val(yyvsp[-3], yyvsp[-1], scope);
		}
	   }
#line 1413 "parser.tab.c"
    break;

  case 52: /* VarList: ID  */
#line 118 "parser.y"
                {
	   	if (check_symbol(yyvsp[0], scope)) {
			printf("Variable %s already declared\n", yyvsp[0]);
			yyerror(yyvsp[0]);
		}
		else {
			put_symbol(yyvsp[0], get_size(type), type, yylineno, scope);
		}
	   }
#line 1427 "parser.tab.c"
    break;

  case 53: /* VarList: ID '=' VarInit  */
#line 127 "parser.y"
                            {
	   	if (check_symbol(yyvsp[-2], scope)) {
			printf("Variable %s already declared\n", yyvsp[-2]);
			yyerror(yyvsp[-2]);
		}
		else {
			put_symbol(yyvsp[-2], get_size(type), type, yylineno, scope);
			yyvsp[0] = type_correction(type, yyvsp[0]);
			if (yyvsp[0] == NULL) {
				printf("%s cannot be cast to type %d\n", yyvsp[0], type);
				yyerror(yyvsp[0]);
				sprintf(yyvsp[0], "~");
			}
			insert_val(yyvsp[-2], yyvsp[0], scope);
		}
	   }
#line 1448 "parser.tab.c"
    break;

  case 54: /* VarList: ID '=' STRLITERAL  */
#line 143 "parser.y"
                               {
	   	if (check_symbol(yyvsp[-2], scope)) {
			printf("Variable %s already declared\n", yyvsp[-2]);
			yyerror(yyvsp[-2]);
		}
		else {
			put_symbol(yyvsp[-2], get_size(type), type, yylineno, scope);
			yyvsp[0] = type_correction(type, yyvsp[0]);
			if (yyvsp[0] == NULL) {
				printf("%s cannot be cast to type %d\n", yyvsp[0], type);
				yyerror(yyvsp[0]);
				sprintf(yyvsp[0], "~");
			}
			insert_val(yyvsp[-2], yyvsp[0], scope);
		}
	   }
#line 1469 "parser.tab.c"
    break;

  case 56: /* VarInit: ID '=' Expr  */
#line 161 "parser.y"
                              {
			symbol *s = get_symbol(yyvsp[-2], scope);
			int scope_trace = scope;
			while (s == NULL && scope_trace >= 0) {
				scope_trace--;
				s = get_symbol(yyvsp[-2], scope_trace);
			}
			if (s == NULL) {
				printf("Variable %s not declared\n", yyvsp[-2]);
				yyerror(yyvsp[-2]);
			}
			else {
				type = s->type;
				yyvsp[0] = type_correction(type, yyvsp[0]);
				if (yyvsp[0] == NULL) {
					printf("%s cannot be cast to type %d\n", yyvsp[0], type);
					yyerror(yyvsp[0]);
					sprintf(yyvsp[0], "~");
				}
				insert_val(yyvsp[-2], yyvsp[0], scope_trace);
			}
		}
#line 1496 "parser.tab.c"
    break;

  case 59: /* VarInit: ID '=' STRLITERAL  */
#line 185 "parser.y"
                                    {
			int scope_trace = scope;
			symbol *s = NULL;
			while (s == NULL && scope_trace > 0) {
				s = get_symbol(yyvsp[-2], scope_trace);
				scope_trace--;
			}
			if (s == NULL) {
				printf("Variable %s not declared\n", yyvsp[-2]);
				yyerror(yyvsp[-2]);
			}
			else {
				// no support for pointers currently
				// only 'char' and 'int' can be initialized with 'char *' (strliteral)
				if (s->type == SYM_TABLE_DOUBLE	|| s->type == SYM_TABLE_VOID || s->type == SYM_TABLE_FLOAT) {
					printf("Incompatible types when initiliazing type '%d' using type 'char *'\n", s->type);
					yyerror(yyvsp[-2]);					
				}
				else {
					insert_val(yyvsp[-2], yyvsp[0], scope);
				}
			}
		}
#line 1524 "parser.tab.c"
    break;

  case 66: /* E: E '+' T  */
#line 217 "parser.y"
           {
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf(yyval, "%d", (atoi(yyvsp[-2]) + atoi(yyvsp[0])));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf(yyval, "%lf", (atof(yyvsp[-2]) + atof(yyvsp[0])));
	else {
		printf("Unsupported type for operation '+'\n");
		yyerror(yyval);
		sprintf(yyval, "~");
	}
 }
#line 1540 "parser.tab.c"
    break;

  case 67: /* E: E '-' T  */
#line 228 "parser.y"
           {	
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf(yyval, "%d", (atoi(yyvsp[-2]) - atoi(yyvsp[0])));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf(yyval, "%lf", (atof(yyvsp[-2]) - atof(yyvsp[0])));
	else {
		printf("Unsupported type for operation '-'\n");
		yyerror(yyval);
		sprintf(yyval, "~");
	}
 }
#line 1556 "parser.tab.c"
    break;

  case 69: /* T: T '*' F  */
#line 241 "parser.y"
           {
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf(yyval, "%d", (atoi(yyvsp[-2]) * atoi(yyvsp[0])));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf(yyval, "%lf", (atof(yyvsp[-2]) * atof(yyvsp[0])));
	else {
		printf("Unsupported type for operation '*'\n");
		yyerror(yyval);
		sprintf(yyval, "~");
	}
 }
#line 1572 "parser.tab.c"
    break;

  case 70: /* T: T '/' F  */
#line 252 "parser.y"
           {
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf(yyval, "%d", (atoi(yyvsp[-2]) / atoi(yyvsp[0])));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf(yyval, "%lf", (atof(yyvsp[-2]) / atof(yyvsp[0])));
	else {
		printf("Unsupported type for operation '/'\n");
		yyerror(yyval);
		sprintf(yyval, "~");
	}
 }
#line 1588 "parser.tab.c"
    break;

  case 73: /* F: ID  */
#line 266 "parser.y"
      {
	symbol *s = get_symbol(yyvsp[0], scope);
	if (s == NULL) {
		printf("Variable %s not declared\n", yyvsp[0]);
		yyerror(yyval);
		sprintf(yyval, "~");
	}
	else {
		sprintf(yyval, s->val);
	}
 }
#line 1604 "parser.tab.c"
    break;

  case 82: /* Number: '+' NUM  */
#line 286 "parser.y"
                    { yyval = yyvsp[0]; }
#line 1610 "parser.tab.c"
    break;

  case 83: /* Number: '-' NUM  */
#line 287 "parser.y"
                    { yyval = get_negative(yyvsp[0]); }
#line 1616 "parser.tab.c"
    break;

  case 85: /* Number: '+' INTEGER  */
#line 289 "parser.y"
                        { yyval = yyvsp[0]; }
#line 1622 "parser.tab.c"
    break;

  case 86: /* Number: '-' INTEGER  */
#line 290 "parser.y"
                        { yyval = get_negative(yyvsp[0]); }
#line 1628 "parser.tab.c"
    break;

  case 98: /* $@5: %empty  */
#line 306 "parser.y"
                                     { scope++; }
#line 1634 "parser.tab.c"
    break;

  case 99: /* $@6: %empty  */
#line 306 "parser.y"
                                                           { scope--; }
#line 1640 "parser.tab.c"
    break;

  case 102: /* $@7: %empty  */
#line 309 "parser.y"
                           { scope++; }
#line 1646 "parser.tab.c"
    break;

  case 103: /* $@8: %empty  */
#line 309 "parser.y"
                                                 { scope--; }
#line 1652 "parser.tab.c"
    break;


#line 1656 "parser.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 312 "parser.y"


int main() {
	yylineno = 1;
	t = init_table();

	if (!yyparse() && !err) {
		printf("Parsing successful\n");
	}
	else {
		printf("Parsing failed\n");
	}

	display();

	return 0;
}

void skipTokens(int token) {
    int next_token;
    do {
        next_token = yylex();
    } while (next_token != 0 && next_token != token);

    if (next_token!=0){
        yyparse();
    }
}

void yyerror(const char *s) {
	fflush(stdout);
	err = 1;
	fprintf(stderr, "Error at line %d: %s\tToken: %s\n", yylineno, s, yytext);
	skipTokens(';'); 
}

