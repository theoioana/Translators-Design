/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HTML_TAB_H_INCLUDED
# define YY_YY_HTML_TAB_H_INCLUDED
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
    O_HTML = 258,                  /* O_HTML  */
    C_HTML = 259,                  /* C_HTML  */
    O_HEAD = 260,                  /* O_HEAD  */
    C_HEAD = 261,                  /* C_HEAD  */
    O_BODY = 262,                  /* O_BODY  */
    C_BODY = 263,                  /* C_BODY  */
    O_FRAMESET = 264,              /* O_FRAMESET  */
    C_FRAMESET = 265,              /* C_FRAMESET  */
    O_FRAME = 266,                 /* O_FRAME  */
    O_NOFRAME = 267,               /* O_NOFRAME  */
    C_NOFRAME = 268,               /* C_NOFRAME  */
    O_FORM = 269,                  /* O_FORM  */
    C_FORM = 270,                  /* C_FORM  */
    O_INPUT = 271,                 /* O_INPUT  */
    O_SELECT = 272,                /* O_SELECT  */
    C_SELECT = 273,                /* C_SELECT  */
    O_OPTION = 274,                /* O_OPTION  */
    C_OPTION = 275,                /* C_OPTION  */
    O_TABLE = 276,                 /* O_TABLE  */
    C_TABLE = 277,                 /* C_TABLE  */
    O_TR = 278,                    /* O_TR  */
    C_TR = 279,                    /* C_TR  */
    O_TD = 280,                    /* O_TD  */
    C_TD = 281,                    /* C_TD  */
    O_TH = 282,                    /* O_TH  */
    C_TH = 283,                    /* C_TH  */
    O_THEAD = 284,                 /* O_THEAD  */
    C_THEAD = 285,                 /* C_THEAD  */
    O_TBODY = 286,                 /* O_TBODY  */
    C_TBODY = 287,                 /* C_TBODY  */
    O_IMG = 288,                   /* O_IMG  */
    O_A = 289,                     /* O_A  */
    C_A = 290,                     /* C_A  */
    O_LINK = 291,                  /* O_LINK  */
    O_UL = 292,                    /* O_UL  */
    C_UL = 293,                    /* C_UL  */
    O_OL = 294,                    /* O_OL  */
    C_OL = 295,                    /* C_OL  */
    O_LI = 296,                    /* O_LI  */
    C_Li = 297,                    /* C_Li  */
    O_B = 298,                     /* O_B  */
    C_B = 299,                     /* C_B  */
    O_I = 300,                     /* O_I  */
    C_I = 301,                     /* C_I  */
    O_U = 302,                     /* O_U  */
    C_U = 303,                     /* C_U  */
    O_SMALL = 304,                 /* O_SMALL  */
    C_SMALL = 305,                 /* C_SMALL  */
    O_SUP = 306,                   /* O_SUP  */
    C_SUP = 307,                   /* C_SUP  */
    O_SUB = 308,                   /* O_SUB  */
    C_SUB = 309,                   /* C_SUB  */
    O_CENTER = 310,                /* O_CENTER  */
    C_CENTER = 311,                /* C_CENTER  */
    O_FONT = 312,                  /* O_FONT  */
    C_FONT = 313,                  /* C_FONT  */
    O_H1 = 314,                    /* O_H1  */
    O_H2 = 315,                    /* O_H2  */
    O_H3 = 316,                    /* O_H3  */
    O_H4 = 317,                    /* O_H4  */
    O_H5 = 318,                    /* O_H5  */
    O_H6 = 319,                    /* O_H6  */
    O_P = 320,                     /* O_P  */
    C_P = 321,                     /* C_P  */
    O_HR = 322,                    /* O_HR  */
    O_BR = 323,                    /* O_BR  */
    O_DIV = 324,                   /* O_DIV  */
    C_DIV = 325,                   /* C_DIV  */
    TEXT = 326                     /* TEXT  */
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

#endif /* !YY_YY_HTML_TAB_H_INCLUDED  */
