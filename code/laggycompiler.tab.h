
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     DATA_TYPE = 259,
     VARIABLE = 260,
     FLOAT = 261,
     CHARACTER = 262,
     STRING = 263,
     ADD = 264,
     TYPE_INT = 265,
     TYPE_CHAR = 266,
     TYPE_FLOAT = 267,
     TYPE_STRING = 268,
     SUBSTRACT = 269,
     MINUS = 270,
     INTO = 271,
     DEVIDE = 272,
     POWER = 273,
     MOD = 274,
     IF = 275,
     ELSE = 276,
     ELSEIF = 277,
     START = 278,
     END = 279,
     EQUAL = 280,
     GREATER = 281,
     LESS = 282,
     NEWLINE = 283,
     FACTORIAL = 284,
     SINE = 285,
     COSINE = 286,
     TANGENT = 287,
     LOGARITHM = 288,
     CHECK = 289,
     WITH = 290,
     OUTPUT = 291,
     ISGREATEREQU = 292,
     ISLESSEQU = 293,
     ISGREATER = 294,
     ISLESS = 295,
     IFX = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 22 "laggycompiler.y"

    struct intPair{
        int arrIndex1;
	    int arrIndex2;
    } varData;

    struct allTypes{
        char charVal;
        int integerVal;
        float floatVal;
        char stringVal[256];
        int type;
    } genericData;


   struct expressionData{
        struct intPair varData;
        struct allTypes genericData;
    } *ifData;



	char charVal;
    int integerVal;
    float floatVal;
    char stringVal[256];



/* Line 1676 of yacc.c  */
#line 123 "laggycompiler.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


