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

"void"			{ return VOID; }
"int"			{ return INT; }
"float"			{ return FLOAT; }
"char"			{ return CHAR; }
"double"		{ return DOUBLE; }
"enum"			{ return ENUM; }
"struct"		{ return STRUCT; }
"union"			{ return UNION; }

"short"			{ return SHORT; }
"long"			{ return LONG; }
"signed"		{ return SIGNED; }
"unsigned"		{ return UNSIGNED; }
"auto"			{ return AUTO; }
"static"		{ return STATIC; }
"extern"		{ return EXTERN; }
"volatile"		{ return VOLATILE; }
"const"			{ return CONST; }
"register"		{ return REGISTER; }

"goto"			{ return GOTO; }
"sizeof"		{ return SIZEOF; }
"typedef"		{ return TYPEDEF; }

"while"			{ return WHILE; }
"for"			{ return FOR; }
"do"			{ return DO; }
"break"			{ return BREAK; }
"else if"		{ return ELSEIF; }
"if"			{ return IF; }
"else"			{ return ELSE; }
"switch"		{ return SWITCH; }
"default"		{ return DEFAULT; }
"case"			{ return CASE; }

"#include"		{ return INCLUDE; }
"#define"		{ return DEFINE; }
"#undef"		{ return UNDEF; }
"#ifdef"		{ return IFDEF; }
"#ifndef"		{ return IFNDEF; }
"#if"			{ return PPIF; }
"#else"			{ return PPELSE; }
"#endif"		{ return ENDIF; }
"main"			{ return MAIN; }
"return"		{ return RETURN; }
"<"([^>\n]+)">"	{ return HEADER; }

\'.\'									{ yylval = strdup(yytext); return CHARACTER; }
{alphabet}({alphabet}|{digit}|_)*		{ yylval = strdup(yytext); return ID; }
{digit}+								{ yylval = strdup(yytext); return INTEGER; }
{digit}+(\.{digit}+)?{exponent}?		{ yylval = strdup(yytext); return NUM; }
\"([^\"\n\\]|\\.)*\"					{ yylval = strdup(yytext); return STRLITERAL; }

\.		{ return DOT; }
->		{ return STRUCTPOINT; }
\'		{ return SINQUOTE; }

"("		{ return '('; }
")"		{ return ')'; }
"["		{ return '['; }
"]"		{ return ']'; }
"{"		{ return '{'; }
"}"		{ return '}'; }
";"		{ return ';'; }
","		{ return ','; }
"?"		{ return '?'; }
":"		{ return ':'; }

"++"	{ return INC; }
"--"	{ return DEC; }

"!"		{ return '!'; }
"&"		{ return '&'; }
"|"		{ return '|'; }
"~"		{ return '~'; }

"*"		{ return '*'; }
"/"		{ return '/'; }
"+"		{ return '+'; }
"-"		{ return '-'; }
"%"		{ return '%'; }

"<<"	{ return SFTLEFT; }
">>"	{ return SFTRIGHT; }

"<"		{ return LESSER; }
"<="	{ return LESSEREQ; }
">"		{ return GREATER; }
">="	{ return GREATEREQ; }
"=="	{ return EQCOMP; }
"!="	{ return NOTEQ; }

"="		{ return '='; }
"+="	{ return SHORTADD; }
"*="	{ return SHORTMUL; }
"/="	{ return SHORTDIV; }
"-="	{ return SHORTSUB; }
"%="	{ return SHORTMOD; }

\n												{ yylineno++; }
[ \t\r]											{ ; }

.		{ printf("lexer: Unknown token '%s'\n", yytext); } 

%%

/*
int main() {
	yylex();
	return 0;
}
*/

int yywrap () {
	return 1;
}
