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

	#include <stdio.h>

	int yylex (void);
	void yyerror(const char *s);
	void skipTokens(int token);

	extern int yylineno;
	extern char *yytext;
	int err = 0;

#line 83 "parser.tab.c"

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
  YYSYMBOL_84_ = 84,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_Start = 86,                     /* Start  */
  YYSYMBOL_Prog = 87,                      /* Prog  */
  YYSYMBOL_Type = 88,                      /* Type  */
  YYSYMBOL_TypeSpecifier = 89,             /* TypeSpecifier  */
  YYSYMBOL_TypeList = 90,                  /* TypeList  */
  YYSYMBOL_Main = 91,                      /* Main  */
  YYSYMBOL_MainArg1 = 92,                  /* MainArg1  */
  YYSYMBOL_MainArg2 = 93,                  /* MainArg2  */
  YYSYMBOL_MainArg3 = 94,                  /* MainArg3  */
  YYSYMBOL_LoopStmt = 95,                  /* LoopStmt  */
  YYSYMBOL_SnglStmt = 96,                  /* SnglStmt  */
  YYSYMBOL_LoopBody = 97,                  /* LoopBody  */
  YYSYMBOL_Body = 98,                      /* Body  */
  YYSYMBOL_VarDeclr = 99,                  /* VarDeclr  */
  YYSYMBOL_VarList = 100,                  /* VarList  */
  YYSYMBOL_VarInit = 101,                  /* VarInit  */
  YYSYMBOL_IncDec = 102,                   /* IncDec  */
  YYSYMBOL_Expr = 103,                     /* Expr  */
  YYSYMBOL_E = 104,                        /* E  */
  YYSYMBOL_T = 105,                        /* T  */
  YYSYMBOL_F = 106,                        /* F  */
  YYSYMBOL_Condition = 107,                /* Condition  */
  YYSYMBOL_Logical = 108,                  /* Logical  */
  YYSYMBOL_Relop = 109,                    /* Relop  */
  YYSYMBOL_ArrayDeclr = 110,               /* ArrayDeclr  */
  YYSYMBOL_ArrayList = 111,                /* ArrayList  */
  YYSYMBOL_ArrayDim = 112,                 /* ArrayDim  */
  YYSYMBOL_ArrayInit = 113,                /* ArrayInit  */
  YYSYMBOL_IfCond = 114,                   /* IfCond  */
  YYSYMBOL_ElseIfCond = 115,               /* ElseIfCond  */
  YYSYMBOL_ElseCond = 116,                 /* ElseCond  */
  YYSYMBOL_LoopIfCond = 117,               /* LoopIfCond  */
  YYSYMBOL_LoopElseIfCond = 118,           /* LoopElseIfCond  */
  YYSYMBOL_LoopElseCond = 119,             /* LoopElseCond  */
  YYSYMBOL_WhileLoop = 120,                /* WhileLoop  */
  YYSYMBOL_DoWhlLoop = 121,                /* DoWhlLoop  */
  YYSYMBOL_ForLoop = 122,                  /* ForLoop  */
  YYSYMBOL_ForInit = 123,                  /* ForInit  */
  YYSYMBOL_ForCond = 124,                  /* ForCond  */
  YYSYMBOL_SwitchCond = 125,               /* SwitchCond  */
  YYSYMBOL_CaseList = 126,                 /* CaseList  */
  YYSYMBOL_Case = 127                      /* Case  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1572

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

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
       2,     2,     2,     2,     2,     2,     2,     2,    84,    68,
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
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    42,    43,    44,    45,    47,    48,    49,
      50,    51,    52,    54,    55,    56,    58,    60,    61,    62,
      64,    65,    66,    67,    68,    70,    71,    72,    74,    75,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   111,   113,   114,   115,   116,   118,   119,   120,   121,
     122,   124,   125,   126,   127,   129,   130,   132,   133,   134,
     136,   137,   138,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   151,   152,   154,   155,   157,   158,   159,
     160,   161,   162,   164,   166,   167,   168,   169,   170,   172,
     173,   174,   175,   176,   177,   179,   180,   181,   183,   184,
     185,   186,   188,   189,   190,   191,   192,   193,   195,   196,
     198,   199,   200,   201,   203,   204,   205,   206,   207,   208,
     210,   211,   213,   214,   216,   217,   219,   220,   222,   223,
     225,   226,   228,   229,   230,   232,   233,   235,   236
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
  "':'", "$accept", "Start", "Prog", "Type", "TypeSpecifier", "TypeList",
  "Main", "MainArg1", "MainArg2", "MainArg3", "LoopStmt", "SnglStmt",
  "LoopBody", "Body", "VarDeclr", "VarList", "VarInit", "IncDec", "Expr",
  "E", "T", "F", "Condition", "Logical", "Relop", "ArrayDeclr",
  "ArrayList", "ArrayDim", "ArrayInit", "IfCond", "ElseIfCond", "ElseCond",
  "LoopIfCond", "LoopElseIfCond", "LoopElseCond", "WhileLoop", "DoWhlLoop",
  "ForLoop", "ForInit", "ForCond", "SwitchCond", "CaseList", "Case", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-261)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-12)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     385,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,   163,   -14,  -261,   -22,  -261,  -261,   -30,   -28,  -261,
      50,    60,    26,  -261,   163,   262,    37,   385,    17,    20,
      92,   181,   -15,    35,  -261,    46,  -261,   385,   385,  -261,
    -261,   -24,  -261,  -261,    18,   -17,  -261,  -261,  -261,  -261,
      50,  -261,  -261,  -261,   -26,   132,  -261,  -261,  -261,   385,
     385,  -261,   181,  -261,  -261,  -261,  -261,  -261,  -261,    92,
      92,    92,    92,    92,   385,  -261,  -261,  -261,   181,    38,
      53,    50,  -261,    77,   151,   103,   -32,    50,    48,  -261,
    -261,   -15,    35,    35,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,   116,    94,    75,  -261,    96,    99,   113,   118,   147,
       7,   128,   131,   113,   113,  -261,   103,   113,  -261,  -261,
      92,   205,   749,  -261,  -261,  -261,   166,   142,   146,  -261,
     165,   167,   854,   172,   183,   749,  -261,   207,   182,   187,
     189,   190,   749,   749,   749,   749,   749,    92,   198,   -41,
      50,  1491,   194,  -261,  1202,   239,  -261,   208,   209,   212,
    -261,  -261,  -261,  -261,  -261,    50,    50,  -261,  -261,   749,
     749,   749,  -261,  -261,  -261,  -261,  -261,  -261,   147,   206,
     229,   213,   103,  -261,  -261,   214,  -261,  -261,   216,   217,
    -261,   215,   221,   222,   223,  1202,  1202,  1202,  1202,  1202,
     224,  -261,  -261,  -261,   226,   227,  -261,  -261,  -261,  -261,
     231,   225,   912,    50,  1202,    50,   275,  1202,  1202,  1202,
    -261,  -261,  -261,  -261,  -261,    50,  1260,   -25,   230,   294,
    1202,  -261,   237,  -261,   240,   242,  -261,  -261,  -261,   243,
     749,   279,   232,   267,    95,   294,   244,  -261,   245,    50,
     970,    50,  -261,   247,   251,  -261,  1318,   246,   249,   274,
     254,    95,  -261,   -27,  -261,   253,  1202,   297,   258,   279,
      50,  -261,  1318,  1318,   250,  -261,  -261,   261,   283,  1028,
     265,   269,  -261,  -261,  -261,   271,  -261,  -261,  1318,   263,
    -261,  1202,  -261,   297,    50,  1376,  -261,  -261,   276,  -261,
     280,   749,   104,  -261,  1086,   277,  1434,  -261,  -261,  1202,
     129,   104,   749,  -261,   282,  1144,  -261,  -261,  -261,  -261,
     285,   129,  1202,  -261,  -261,  -261,  -261,   287,  -261
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,    16,    12,    14,    13,    15,    21,    18,    19,
      20,    22,     0,    96,    95,    94,    93,     0,     0,    10,
       0,     0,     0,     2,    25,     0,     0,     0,     0,     0,
      78,    76,    86,    89,    92,     0,    17,     0,     0,    81,
      82,     0,    83,    84,   104,     0,   101,    98,    99,   100,
       0,     1,    23,    24,     0,    74,    71,   113,     5,     0,
       0,    95,    79,   107,   108,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     3,     4,    80,    77,     0,
       0,     0,    97,     0,    29,     0,     0,     0,   115,     7,
       8,    85,    87,    88,    90,    91,     9,   105,   106,   103,
     102,     0,     0,    74,    72,     0,     0,   124,    75,     0,
       0,    28,     0,   122,   120,   123,     0,     0,   114,   118,
     127,    34,    70,   121,   119,    73,   126,     0,     0,    27,
       0,     0,     0,     0,     0,    70,    69,     0,     0,     0,
       0,     0,    70,    70,    70,    70,    70,   127,   117,     0,
       0,   161,     0,    48,    59,     0,    39,     0,     0,     0,
      43,    44,    45,    46,    47,     0,     0,    68,    26,    70,
      70,    70,    63,    64,    65,    66,    67,   125,     0,     0,
       0,     0,     0,   158,   160,     0,   159,    38,     0,     0,
      58,     0,     0,     0,     0,    59,    59,    59,    59,    59,
       0,    40,    41,    42,     0,     0,    60,    61,    62,   116,
       0,    33,     0,   161,    59,     0,     0,    59,    59,    59,
      53,    54,    55,    56,    57,     0,     0,     0,    32,    37,
      59,   152,     0,    49,     0,     0,    50,    51,    52,     0,
      70,   130,     0,     0,     0,    37,     0,    30,     0,   161,
       0,     0,   154,     0,     0,   128,     0,     0,     0,     0,
       0,   165,    31,     0,   153,     0,    59,   142,     0,   131,
       0,   164,     0,     0,     0,   162,   166,     0,     0,     0,
       0,     0,   140,   155,   129,     0,   163,   168,     0,     0,
      35,    59,   156,   143,     0,     0,   167,    36,     0,   141,
       0,    70,   136,   157,     0,     0,     0,   134,   132,    59,
     148,   137,    70,   138,     0,     0,   146,   144,   135,   133,
       0,   149,    59,   150,   139,   147,   145,     0,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -261,  -261,   130,   326,     6,     2,  -261,  -261,  -261,   107,
    -202,  -222,   438,   -77,    52,   -82,     0,  -261,   -29,   286,
     115,   145,    -9,  -261,  -261,   200,  -103,    10,   218,   -96,
    -260,    49,  -261,  -211,    40,   252,   375,   427,  -261,  -200,
     550,   101,  -261
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    22,    23,    24,    25,   137,    27,   102,   129,   247,
     155,   156,   191,   138,   192,    56,   193,    30,    31,    32,
      33,    34,   184,    81,    69,   194,    57,    88,   127,   142,
     255,   308,   195,   282,   317,   196,   197,   198,   185,   186,
     199,   260,   261
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    62,    26,   104,   241,   179,   118,   242,   243,   284,
     231,    45,    78,   232,   105,   106,    42,    36,    43,   277,
      44,    13,    61,    15,    16,    77,    51,    29,    37,    26,
      52,    39,    40,   180,   125,    38,   160,    29,    29,    26,
      26,    83,   307,    84,   107,    20,   244,   278,   267,   265,
      44,   318,    28,    82,   271,    41,   119,    21,   167,    29,
      29,    26,    26,    70,    71,   172,   173,   174,   175,   176,
     286,   287,    99,   302,    29,   209,    26,   292,   120,    28,
      54,    44,   299,    55,   313,    59,   296,   108,    60,    28,
      28,   126,   206,   207,   208,    13,    14,    15,    16,   316,
      79,    80,   310,    17,    18,    46,    47,    48,    49,    72,
     325,    28,    28,   323,    74,    73,   160,   115,   126,    20,
      97,   109,   140,   123,   124,   110,    28,   258,   259,    50,
     160,    21,   158,   306,   254,   140,    98,    13,    61,    15,
      16,   181,   140,   140,   140,   140,   140,   100,    85,   103,
      44,    44,    87,   182,   160,   101,   204,    58,   315,   281,
     160,    20,   111,   253,   112,    44,   205,    75,    76,   140,
     140,   140,   113,    21,   139,   114,   160,   160,     7,     8,
       9,    10,    11,   160,   157,    92,    93,   139,    86,    89,
      90,   116,   160,   117,   139,   139,   139,   139,   139,   160,
      35,   121,   122,   183,    96,    85,   234,    86,   160,    87,
     160,   128,   158,    44,   148,    44,   239,    94,    95,   160,
     149,   139,   139,   139,   305,    44,   158,    35,    63,    64,
      65,    66,    67,    68,   150,   320,   151,    35,    35,   147,
     140,   165,   268,    63,    64,    65,    66,    67,    68,    44,
     158,    44,   166,    55,   168,   169,   158,   170,   171,    35,
      35,   285,   187,   200,   157,     2,     3,     4,     5,     6,
      44,   178,   158,   158,    35,   211,   201,   202,   157,   158,
     203,   210,   213,   212,   214,   300,   215,   216,   158,   217,
     218,   219,   139,   225,    44,   158,   226,   227,   229,   235,
     246,   140,   157,   245,   158,   249,   158,   228,   157,   254,
     250,   251,   140,   252,   257,   158,   256,   264,   263,   269,
     270,   274,   141,   279,   157,   157,   275,   281,   283,   290,
     272,   157,   159,   273,   288,   141,   289,   293,   294,   297,
     157,   295,   141,   141,   141,   141,   141,   157,   303,   311,
     304,    53,   262,   139,   321,    91,   157,   324,   157,   328,
     319,   326,   276,     0,   139,   177,     0,   157,     0,   141,
     141,   141,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   -11,     1,   143,     2,     3,
       4,     5,     6,     0,   143,   143,   143,   143,   143,     0,
       7,     8,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,    12,
       0,   143,   143,   143,     0,     0,   159,     0,     0,     0,
      13,    14,    15,    16,     0,     0,     0,     0,    17,    18,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,     0,     0,    19,    20,     0,   159,     0,     0,     0,
       0,     0,     0,     0,   161,     0,    21,     0,     0,     0,
       0,     0,   159,   159,     0,     0,     0,     0,   161,   159,
       0,     0,     0,     0,     0,     0,     0,     0,   159,     0,
       0,     0,   143,     0,     0,   159,     0,   144,     0,     0,
       0,   141,   161,     0,   159,     0,   159,   162,   161,     0,
     144,     0,   141,     0,     0,   159,     0,   144,   144,   144,
     144,   144,     0,     0,   161,   161,     0,     0,     0,     0,
       0,   161,     0,     0,     0,     0,     0,     0,     0,     0,
     161,     0,     0,     0,   144,   144,   144,   161,     0,   145,
       0,     0,     0,   143,     0,     0,   161,     0,   161,   163,
       0,     0,   145,     0,   143,     0,     0,   161,     0,   145,
     145,   145,   145,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   145,   145,     0,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,     0,
       0,   162,     0,   220,   221,   222,   223,   224,     0,   163,
       0,     0,     0,     0,     0,     0,     0,   162,   162,     0,
       0,     0,   233,   163,   162,   236,   237,   238,     0,     0,
       0,     0,     0,   162,     0,     0,     0,   145,   248,     0,
     162,     0,   146,     0,     0,     0,   144,   163,     0,   162,
       0,   162,   164,   163,     0,   146,     0,   144,     0,     0,
     162,     0,   146,   146,   146,   146,   146,     0,     0,   163,
     163,     0,     0,     0,   280,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,   163,     0,     0,     0,   146,
     146,   146,   163,     0,     0,     0,     0,     0,   145,   298,
       0,   163,     0,   163,     0,     0,     0,     0,     0,   145,
       0,     0,   163,     0,     0,     0,     0,   314,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     0,     0,     0,
     327,     0,   164,     0,     7,     8,     9,    10,    11,     0,
       0,     0,     0,   130,   131,   132,   164,   133,     0,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,     0,     0,    13,    14,    15,    16,   135,     0,
     164,     0,    17,    18,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   136,    20,     0,
       0,     0,   164,   164,     0,     0,     0,     0,     0,   164,
      21,     0,     0,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,     0,   164,     0,     0,     0,     0,
       0,   146,     0,     0,   164,     0,   164,     2,     3,     4,
       5,     6,   146,     0,     0,   164,     0,     0,     0,     7,
       8,     9,    10,    11,     0,     0,     0,     0,   130,   131,
     132,   152,   133,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,     0,     0,     0,     0,    17,    18,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       0,     0,   153,    20,     0,   154,     0,     7,     8,     9,
      10,    11,     0,     0,     0,    21,   130,   131,   132,   152,
     133,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
      16,     0,     0,     0,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     0,     0,
     153,    20,     0,   230,     0,     7,     8,     9,    10,    11,
       0,     0,     0,    21,   130,   131,   132,   152,   133,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,     0,
       0,     0,     0,    17,    18,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     0,     0,   153,    20,
       0,   266,     0,     7,     8,     9,    10,    11,     0,     0,
       0,    21,   130,   131,   132,   152,   133,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,    16,     0,     0,     0,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     0,     0,   153,    20,     0,   291,
       0,     7,     8,     9,    10,    11,     0,     0,     0,    21,
     130,   131,   132,   152,   133,     0,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    16,     0,     0,     0,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     0,     0,   153,    20,     0,   309,     0,     7,
       8,     9,    10,    11,     0,     0,     0,    21,   130,   131,
     132,   152,   133,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,     0,     0,     0,     0,    17,    18,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       0,     0,   153,    20,     0,   322,     0,     7,     8,     9,
      10,    11,     0,     0,     0,    21,   130,   131,   132,   188,
     189,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
      16,     0,     0,     0,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     0,     0,
     190,    20,     0,     0,     0,     7,     8,     9,    10,    11,
       0,     0,     0,    21,   130,   131,   132,     0,   133,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,     0,
       0,     0,     0,    17,    18,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     0,     0,   153,    20,
       0,   240,     0,     7,     8,     9,    10,    11,     0,     0,
       0,    21,   130,   131,   132,   152,   133,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,    16,     0,     0,     0,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     0,     0,   153,    20,     0,     0,
       0,     7,     8,     9,    10,    11,     0,     0,     0,    21,
     130,   131,   132,     0,   133,     0,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    16,     0,     0,     0,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     0,     0,   153,    20,     0,   301,     0,     7,
       8,     9,    10,    11,     0,     0,     0,    21,   130,   131,
     132,     0,   133,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,     0,     0,     0,     0,    17,    18,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     0,
       0,     0,   153,    20,     0,   312,     7,     8,     9,    10,
      11,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,    15,    16,
       0,     0,     0,     0,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21
};

static const yytype_int16 yycheck[] =
{
       0,    30,     0,    85,   226,    46,   109,    32,    33,   269,
     212,    20,    41,   213,    46,    47,    46,    11,    46,    46,
      20,    45,    46,    47,    48,    49,     0,    27,    42,    27,
      24,    53,    54,    74,   116,    49,   132,    37,    38,    37,
      38,    50,   302,    69,    76,    69,    71,    74,   250,   249,
      50,   311,     0,    70,   256,    77,    49,    81,   135,    59,
      60,    59,    60,    78,    79,   142,   143,   144,   145,   146,
     272,   273,    81,   295,    74,   178,    74,   279,    71,    27,
      43,    81,   293,    46,   306,    68,   288,    87,    68,    37,
      38,   120,   169,   170,   171,    45,    46,    47,    48,   310,
      82,    83,   304,    53,    54,    45,    46,    47,    48,    74,
     321,    59,    60,   315,    68,    80,   212,   107,   147,    69,
      82,    73,   122,   113,   114,    77,    74,    32,    33,    69,
     226,    81,   132,    29,    30,   135,    83,    45,    46,    47,
      48,   150,   142,   143,   144,   145,   146,    70,    73,    46,
     150,   151,    77,   151,   250,     4,   165,    27,    29,    30,
     256,    69,    46,   240,    70,   165,   166,    37,    38,   169,
     170,   171,    76,    81,   122,    76,   272,   273,    15,    16,
      17,    18,    19,   279,   132,    70,    71,   135,    75,    59,
      60,    73,   288,    46,   142,   143,   144,   145,   146,   295,
       0,    73,    71,   151,    74,    73,   215,    75,   304,    77,
     306,     6,   212,   213,    72,   215,   225,    72,    73,   315,
      74,   169,   170,   171,   301,   225,   226,    27,    62,    63,
      64,    65,    66,    67,    69,   312,    69,    37,    38,    73,
     240,    69,   251,    62,    63,    64,    65,    66,    67,   249,
     250,   251,    69,    46,    72,    68,   256,    68,    68,    59,
      60,   270,    68,    24,   212,     3,     4,     5,     6,     7,
     270,    73,   272,   273,    74,    46,    68,    68,   226,   279,
      68,    75,    68,    70,    68,   294,    69,    72,   288,    68,
      68,    68,   240,    69,   294,   295,    70,    70,    73,    24,
       6,   301,   250,    73,   304,    68,   306,    76,   256,    30,
      70,    69,   312,    70,    47,   315,    84,    72,    74,    72,
      69,    47,   122,    70,   272,   273,    72,    30,    70,    46,
      84,   279,   132,    84,    84,   135,    75,    72,    69,    76,
     288,    70,   142,   143,   144,   145,   146,   295,    72,    72,
      70,    25,   245,   301,    72,    69,   304,    72,   306,    72,
     311,   321,   261,    -1,   312,   147,    -1,   315,    -1,   169,
     170,   171,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,     0,     1,   135,     3,     4,
       5,     6,     7,    -1,   142,   143,   144,   145,   146,    -1,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,   169,   170,   171,    -1,    -1,   226,    -1,    -1,    -1,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    68,    69,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    81,    -1,    -1,    -1,
      -1,    -1,   272,   273,    -1,    -1,    -1,    -1,   226,   279,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,   240,    -1,    -1,   295,    -1,   122,    -1,    -1,
      -1,   301,   250,    -1,   304,    -1,   306,   132,   256,    -1,
     135,    -1,   312,    -1,    -1,   315,    -1,   142,   143,   144,
     145,   146,    -1,    -1,   272,   273,    -1,    -1,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     288,    -1,    -1,    -1,   169,   170,   171,   295,    -1,   122,
      -1,    -1,    -1,   301,    -1,    -1,   304,    -1,   306,   132,
      -1,    -1,   135,    -1,   312,    -1,    -1,   315,    -1,   142,
     143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,   170,   171,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
      -1,   256,    -1,   195,   196,   197,   198,   199,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,   273,    -1,
      -1,    -1,   214,   226,   279,   217,   218,   219,    -1,    -1,
      -1,    -1,    -1,   288,    -1,    -1,    -1,   240,   230,    -1,
     295,    -1,   122,    -1,    -1,    -1,   301,   250,    -1,   304,
      -1,   306,   132,   256,    -1,   135,    -1,   312,    -1,    -1,
     315,    -1,   142,   143,   144,   145,   146,    -1,    -1,   272,
     273,    -1,    -1,    -1,   266,    -1,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,   169,
     170,   171,   295,    -1,    -1,    -1,    -1,    -1,   301,   291,
      -1,   304,    -1,   306,    -1,    -1,    -1,    -1,    -1,   312,
      -1,    -1,   315,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
     322,    -1,   212,    -1,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,   226,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
     250,    -1,    53,    54,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,   272,   273,    -1,    -1,    -1,    -1,    -1,   279,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,
      -1,   301,    -1,    -1,   304,    -1,   306,     3,     4,     5,
       6,     7,   312,    -1,    -1,   315,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    68,    69,    -1,    71,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    81,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      68,    69,    -1,    71,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    81,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    68,    69,
      -1,    71,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    81,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    68,    69,    -1,    71,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    81,
      24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    68,    69,    -1,    71,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    81,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    68,    69,    -1,    71,    -1,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    81,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      68,    69,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    81,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    68,    69,
      -1,    71,    -1,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    81,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    68,    69,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    81,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    68,    69,    -1,    71,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    81,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    68,    69,    -1,    71,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,    15,    16,    17,
      18,    19,    34,    45,    46,    47,    48,    53,    54,    68,
      69,    81,    86,    87,    88,    89,    90,    91,    99,   101,
     102,   103,   104,   105,   106,   110,    89,    42,    49,    53,
      54,    77,    46,    46,   101,   107,    45,    46,    47,    48,
      69,     0,    89,    88,    43,    46,   100,   111,    87,    68,
      68,    46,   103,    62,    63,    64,    65,    66,    67,   109,
      78,    79,    74,    80,    68,    87,    87,    49,   103,    82,
      83,   108,    70,   107,    69,    73,    75,    77,   112,    87,
      87,   104,   105,   105,   106,   106,    87,    82,    83,   107,
      70,     4,    92,    46,   100,    46,    47,    76,   101,    73,
      77,    46,    70,    76,    76,   112,    73,    46,   111,    49,
      71,    73,    71,   112,   112,   100,   103,   113,     6,    93,
      24,    25,    26,    28,    31,    49,    68,    90,    98,    99,
     101,   110,   114,   120,   121,   122,   125,    73,    72,    74,
      69,    69,    27,    68,    71,    95,    96,    99,   101,   110,
     114,   120,   121,   122,   125,    69,    69,    98,    72,    68,
      68,    68,    98,    98,    98,    98,    98,   113,    73,    46,
      74,   107,    90,    99,   107,   123,   124,    68,    27,    28,
      68,    97,    99,   101,   110,   117,   120,   121,   122,   125,
      24,    68,    68,    68,   107,   101,    98,    98,    98,   111,
      75,    46,    70,    68,    68,    69,    72,    68,    68,    68,
      97,    97,    97,    97,    97,    69,    70,    70,    76,    73,
      71,    95,   124,    97,   107,    24,    97,    97,    97,   107,
      71,    96,    32,    33,    71,    73,     6,    94,    97,    68,
      70,    69,    70,    98,    30,   115,    84,    47,    32,    33,
     126,   127,    94,    74,    72,   124,    71,    95,   107,    72,
      69,    95,    84,    84,    47,    72,   126,    46,    74,    70,
      97,    30,   118,    70,   115,   107,    95,    95,    84,    75,
      46,    71,    95,    72,    69,    70,    95,    76,    97,   118,
     107,    71,    96,    72,    70,    98,    29,   115,   116,    71,
      95,    72,    71,    96,    97,    29,   118,   119,   115,   116,
      98,    72,    71,    95,    72,   118,   119,    97,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    85,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    91,    92,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   110,   111,   111,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   117,   117,   118,   118,   118,   118,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   125,   126,   126,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     2,     1,     3,     3,     3,
       1,     0,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     1,     8,     4,     2,     0,
       6,     7,     5,     4,     0,     4,     5,     0,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     0,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     1,
       0,     2,     3,     5,     1,     3,     1,     3,     1,     2,
       3,     2,     2,     2,     2,     3,     1,     3,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     3,     2,     2,
       2,     2,     4,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     2,     8,     6,     4,     4,
       3,     4,     3,     3,     2,     3,     1,     0,     6,     8,
       5,     7,     6,     8,     6,     8,     5,     7,     2,     4,
       6,     8,     5,     7,     6,     8,     6,     8,     5,     7,
       2,     4,     5,     7,     6,     8,     9,    11,     1,     1,
       1,     0,     7,     8,     7,     1,     2,     4,     3
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

#line 1670 "parser.tab.c"

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

#line 238 "parser.y"


int main() {
	yylineno = 1;
	if (!yyparse() && !err) {
		printf("Parsing successful\n");
	}
	else {
		printf("Parsing failed\n");
	}

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

