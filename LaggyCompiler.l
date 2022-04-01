%{
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
mods "\"
fs "<"
fe ">"
eol "."
inc "++"
dec "--"
%%
({sLetter}|{cLetter})+({sLetter}|{cLetter}|{number})*<> {
	printf(" %s : This is a function\n",yytext);
	functions++;
	}
{ps}|{pe}|{eq}|{nt}|{gr}|{ls}|{nd}|{or}|{int}|{float}|{char}|{string}|{if}|{elseIf}|{else}|{while}|{include}|{return} {
	printf(" %s : This is a keyword\n",yytext);
	keywords++;
	}
-({sLetter}|{cLetter})+({sLetter}|{cLetter}|{number})* {
	printf(" %s : This is a variable\n",yytext);
	variables++;
	}
(`({sLetter}+|{cLetter}+|{number}+|{space}+)+`) {
	printf(" %s : This is a text\n",yytext);
	text++;
	}
{es}|{as}|{ss}|{ds}|{ms}|{xs}|{fs}|{fe}|{eol}|{mods} {
	printf(" %s : This is a symbol\n",yytext);
	symbols++;
	}
.
%%
int yywrap(){
	return 1;
}

main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	printf("LaggyCompiler Output!!\n\n");
	yylex();
	printf("Total no of keyword = %d and variable = %d and symbols = %d and functions = %d",keywords,variables, symbols,functions);
}