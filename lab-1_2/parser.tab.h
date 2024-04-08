/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VOID = 258,                    /* VOID  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    CHAR = 261,                    /* CHAR  */
    DOUBLE = 262,                  /* DOUBLE  */
    ENUM = 263,                    /* ENUM  */
    STRUCT = 264,                  /* STRUCT  */
    UNION = 265,                   /* UNION  */
    SHORT = 266,                   /* SHORT  */
    LONG = 267,                    /* LONG  */
    SIGNED = 268,                  /* SIGNED  */
    UNSIGNED = 269,                /* UNSIGNED  */
    AUTO = 270,                    /* AUTO  */
    STATIC = 271,                  /* STATIC  */
    EXTERN = 272,                  /* EXTERN  */
    VOLATILE = 273,                /* VOLATILE  */
    CONST = 274,                   /* CONST  */
    REGISTER = 275,                /* REGISTER  */
    GOTO = 276,                    /* GOTO  */
    SIZEOF = 277,                  /* SIZEOF  */
    TYPEDEF = 278,                 /* TYPEDEF  */
    WHILE = 279,                   /* WHILE  */
    FOR = 280,                     /* FOR  */
    DO = 281,                      /* DO  */
    BREAK = 282,                   /* BREAK  */
    IF = 283,                      /* IF  */
    ELSE = 284,                    /* ELSE  */
    ELSEIF = 285,                  /* ELSEIF  */
    SWITCH = 286,                  /* SWITCH  */
    DEFAULT = 287,                 /* DEFAULT  */
    CASE = 288,                    /* CASE  */
    INCLUDE = 289,                 /* INCLUDE  */
    DEFINE = 290,                  /* DEFINE  */
    UNDEF = 291,                   /* UNDEF  */
    IFDEF = 292,                   /* IFDEF  */
    IFNDEF = 293,                  /* IFNDEF  */
    PPIF = 294,                    /* PPIF  */
    PPELSE = 295,                  /* PPELSE  */
    ENDIF = 296,                   /* ENDIF  */
    HEADER = 297,                  /* HEADER  */
    MAIN = 298,                    /* MAIN  */
    RETURN = 299,                  /* RETURN  */
    CHARACTER = 300,               /* CHARACTER  */
    ID = 301,                      /* ID  */
    INTEGER = 302,                 /* INTEGER  */
    NUM = 303,                     /* NUM  */
    STRLITERAL = 304,              /* STRLITERAL  */
    DOT = 305,                     /* DOT  */
    STRUCTPOINT = 306,             /* STRUCTPOINT  */
    SINQUOTE = 307,                /* SINQUOTE  */
    INC = 308,                     /* INC  */
    DEC = 309,                     /* DEC  */
    SFTLEFT = 310,                 /* SFTLEFT  */
    SFTRIGHT = 311,                /* SFTRIGHT  */
    SHORTADD = 312,                /* SHORTADD  */
    SHORTMUL = 313,                /* SHORTMUL  */
    SHORTDIV = 314,                /* SHORTDIV  */
    SHORTSUB = 315,                /* SHORTSUB  */
    SHORTMOD = 316,                /* SHORTMOD  */
    LESSER = 317,                  /* LESSER  */
    LESSEREQ = 318,                /* LESSEREQ  */
    GREATER = 319,                 /* GREATER  */
    GREATEREQ = 320,               /* GREATEREQ  */
    EQCOMP = 321,                  /* EQCOMP  */
    NOTEQ = 322                    /* NOTEQ  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
