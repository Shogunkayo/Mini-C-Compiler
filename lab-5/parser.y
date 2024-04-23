%{
	#include <stdio.h>
	#include "ast.c"

	int yylex (void);
	void yyerror(const char *s);
	void skipTokens(int token);

	extern int yylineno;
	extern char *yytext;
	int err = 0;
%}

%start Start

%union {
	int integer;
	double number;
	char character;
	char *string;
	struct AST_NODE *node;
}

%token <string> ID
%token <integer> INTEGER
%token <number> NUM

%type <node> Start VarInit E T F

%%

Start: VarInit { display($1); YYACCEPT; } ;

VarInit: ID '=' E {
        /*
	   	ast_node_value val, val_left;
		val.ast_char = '=';
		val_left.ast_string = strdup($1);
	   	$$ = create_node("ASSIGN", "ast_char", val, print_char_value, create_node("ID", "ast_string", val_left, print_string_value, NULL, NULL), $3);
	    */

        $$ = $3;
       };

E: E '+' T {
 	ast_node_value val;
	val.ast_char = '+';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3); 
 }
 | E '-' T {
 	ast_node_value val;
	val.ast_char = '-';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3);
 }
 | T ;

T: T '*' F {
	ast_node_value val;
	val.ast_char = '*';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3);
 }
 | T '/' F {
	ast_node_value val;
	val.ast_char = '/';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3);
 }
 | F ;

F: '(' E ')' { $$ = $2; }
 | NUM { 
 	ast_node_value val;
	val.ast_double = $1;
	$$ = create_node("NUM", "ast_double", val, print_double_value, NULL, NULL);
 }
 | INTEGER {
	ast_node_value val;
	val.ast_int = $1;
	$$ = create_node("INT", "ast_int", val, print_int_value, NULL, NULL);
 }
 | ID {
	ast_node_value val;
	val.ast_string = strdup($1);
	$$ = create_node("ID", "ast_string", val, print_string_value, NULL, NULL);
 } ;

%%

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
