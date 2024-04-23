%{
	#include <stdio.h>
	#include "parser.tab.h"
	
	int yywrap();
	int yylineno;
%}

alphabet			[a-zA-Z]
digit				[0-9]
exponent			[eE][-+]?{digit}+ 

%%

\/\/.*|\/\*(.*\n)*.*\*\/						{ ; }

"while"         { return WHILE; }
"do"            { return DO; }
"if"            { return IF; }
"else"          { return ELSE; }

{alphabet}({alphabet}|{digit}|_)*		{ yylval.string = strdup(yytext); return ID; }
{digit}+								{ yylval.integer = atoi(yytext); return INTEGER; }
{digit}+(\.{digit}+)?{exponent}?		{ yylval.number = atof(yytext); return NUM; }

"*"		{ return '*'; }
"/"		{ return '/'; }
"+"		{ return '+'; }
"-"		{ return '-'; }

"("     { return '('; }
")"     { return ')'; }
"["     { return '['; }
"]"     { return ']'; }
"{"     { return '{'; }
"}"     { return '}'; }
";"     { return ';'; }
","     { return ','; }
"?"     { return '?'; }
":"     { return ':'; }

"<"     { return LESSER; }
"<="    { return LESSEREQ; }
">"     { return GREATER; }
">="    { return GREATEREQ; }
"=="    { return EQCOMP; }
"!="    { return NOTEQ; }

"="		{ return '='; }

\n												{ yylineno++; }
[ \t\r]											{ ; }

.		{ printf("lexer: Unknown token '%s'\n", yytext); } 

%%

int yywrap () {
	return 1;
}
