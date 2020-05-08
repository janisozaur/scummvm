/* A Bison parser, made by GNU Bison 3.5.4.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED
#define YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
#define YYTOKENTYPE
enum yytokentype {
	UNARY = 258,
	CASTREF = 259,
	VOID = 260,
	VAR = 261,
	POINT = 262,
	RECT = 263,
	ARRAY = 264,
	OBJECT = 265,
	REFERENCE = 266,
	LEXERROR = 267,
	PARRAY = 268,
	INT = 269,
	ARGC = 270,
	ARGCNORET = 271,
	THEENTITY = 272,
	THEENTITYWITHID = 273,
	THEMENUITEMENTITY = 274,
	THEMENUITEMSENTITY = 275,
	FLOAT = 276,
	BLTIN = 277,
	FBLTIN = 278,
	RBLTIN = 279,
	ID = 280,
	STRING = 281,
	HANDLER = 282,
	SYMBOL = 283,
	ENDCLAUSE = 284,
	tPLAYACCEL = 285,
	tMETHOD = 286,
	THEOBJECTFIELD = 287,
	THEOBJECTREF = 288,
	tDOWN = 289,
	tELSE = 290,
	tELSIF = 291,
	tEXIT = 292,
	tGLOBAL = 293,
	tGO = 294,
	tIF = 295,
	tIN = 296,
	tINTO = 297,
	tLOOP = 298,
	tMACRO = 299,
	tMOVIE = 300,
	tNEXT = 301,
	tOF = 302,
	tPREVIOUS = 303,
	tPUT = 304,
	tREPEAT = 305,
	tSET = 306,
	tTHEN = 307,
	tTO = 308,
	tWHEN = 309,
	tWITH = 310,
	tWHILE = 311,
	tNLELSE = 312,
	tFACTORY = 313,
	tOPEN = 314,
	tPLAY = 315,
	tINSTANCE = 316,
	tGE = 317,
	tLE = 318,
	tEQ = 319,
	tNEQ = 320,
	tAND = 321,
	tOR = 322,
	tNOT = 323,
	tMOD = 324,
	tAFTER = 325,
	tBEFORE = 326,
	tCONCAT = 327,
	tCONTAINS = 328,
	tSTARTS = 329,
	tCHAR = 330,
	tITEM = 331,
	tLINE = 332,
	tWORD = 333,
	tSPRITE = 334,
	tINTERSECTS = 335,
	tWITHIN = 336,
	tTELL = 337,
	tPROPERTY = 338,
	tON = 339,
	tENDIF = 340,
	tENDREPEAT = 341,
	tENDTELL = 342
};
#endif

/* Value type.  */
#if !defined YYSTYPE && !defined YYSTYPE_IS_DECLARED
union YYSTYPE {
#line 85 "engines/director/lingo/lingo-gr.y"

	Common::String *s;
	int i;
	double f;
	int e[2]; // Entity + field
	int code;
	int narg; /* number of arguments */
	Director::DatumArray *arr;

	struct {
		Common::String *os;
		int oe;
	} objectfield;

	struct {
		Common::String *obj;
		Common::String *field;
	} objectref;

#line 165 "engines/director/lingo/lingo-gr.h"
};
typedef union YYSTYPE YYSTYPE;
#define YYSTYPE_IS_TRIVIAL 1
#define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

int yyparse(void);

#endif /* !YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED  */
