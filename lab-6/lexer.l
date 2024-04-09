%{
	#define YYSTYPE char*

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

{alphabet}({alphabet}|{digit}|_)*		{ yylval = strdup(yytext); return ID; }
{digit}+								{ yylval = strdup(yytext); return INTEGER; }
{digit}+(\.{digit}+)?{exponent}?		{ yylval = strdup(yytext); return NUM; }

"*"		{ return '*'; }
"/"		{ return '/'; }
"+"		{ return '+'; }
"-"		{ return '-'; }

"="		{ return '='; }

\n												{ yylineno++; }
[ \t\r]											{ ; }

.		{ printf("lexer: Unknown token '%s'\n", yytext); } 

%%

int yywrap () {
	return 1;
}


