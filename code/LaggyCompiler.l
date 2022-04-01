%{
	#include "LaggyCompiler.tab.h"
	#include <stdlib.h>
	#include <string.h>

	void yyerror(char *);


	int keywords = 0;
	int variables = 0;
	int symbols = 0;
	int text = 0;
	int functions = 0;
%}


sLetter [a-z]
cLetter [A-Z]
number [0-9]
space [ ]
include "paste"
int "integer"
string "carray"
float "decimal"
char "character"
if "when"
elseIf "or"
else "nor"
while "while"
return "send"
ps "start"
pe "end"
eq "equal"
nt "not"
gr "greater"
ls "less"
nd "and"
or "or"
es "="
as "+"
ss "-"
ds "/"
ms "x"
xs "^"
mods "//"
fs "<"
fe ">"
eol "."
inc "++"
dec "--"
%%
{int} {
	return TYPE_INT;
}
{float} {
	return TYPE_FLOAT;
}
{char} {
	return TYPE_CHAR;
}
{string} {
	return TYPE_STRING;
}

"add" {
	return ADD;
}

"substract" {
	return SUBSTRACT;
}

"into" {
	return INTO;
}
"devide" {
	return DEVIDE;
}
"power" {
	return POWER;
}
"minus" {
	return MINUS;
}

"mod" {
	return MOD;
}

"factorial" {
	return FACTORIAL;
}

"equal" {
	return EQUAL;
}
"greater" {
	return GREATER;
}
"less" {
	return LESS;
}
"sine" {
	return SINE;
}
"cosine" {
	return COSINE;
}
"tangent" {
	return TANGENT;
}
"logarithm" {
	return LOGARITHM;
}

"check" {
	return CHECK;
}
"with" {
	return WITH;
}
"output" {
	return OUTPUT;
}

{if} {
	return IF;
}

{else} {
	return ELSE;
}
{elseIf} {
	return ELSEIF;
}

{ps} {
	return START;
}

{pe} {
	return END;
}

({sLetter}|{cLetter})({sLetter}|{cLetter}|{number})? {
	if(yytext[0]>='a'){
		yylval.varData.arrIndex1 = yytext[0] - 'a';
	} else {
		yylval.varData.arrIndex1 = yytext[0] - 'A' + 26;
	}

	if(yytext[1]>='a' && yytext[1]<='z'){
		yylval.varData.arrIndex2 = yytext[1] - 'a';
	} else if(yytext[1]>='A' && yytext[1]<='Z'){
		yylval.varData.arrIndex2 = yytext[1] - 'A' + 26;
	} else if(yytext[1]>='0' && yytext[1]<='9'){
		yylval.varData.arrIndex2 = yytext[1] - '0' + 52;
	} else {
		yylval.varData.arrIndex2 = 62;
	}
	
	return VARIABLE;
	}
[`]({sLetter}|{cLetter})?[`] {
	yylval.charVal = yytext[1];
	if(yytext[1]=='`'){
		yylval.charVal='\0';
	}
	return CHARACTER;
}
[`]({sLetter}|{cLetter}|{number}|[.]|[?]|[!]|[#]|[*]|[(]|[)]|[+]|[-]|[ ])*[`] {
	strcpy(yylval.stringVal, yytext);
	return STRING;
}
{number}*[.]{number}+ {
	yylval.floatVal = atof(yytext);
	return FLOAT;
}
{number}+ {
	yylval.integerVal = atoi(yytext);
	return INTEGER;
}

[-+()/=*,\n]	{ return *yytext; }

[ \t]* 	; 	/* skip whitespace */

.	{ return *yytext; }

%%
int yywrap(){
	return 1;
}

