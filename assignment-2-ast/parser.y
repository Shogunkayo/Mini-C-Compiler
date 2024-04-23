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

%token WHILE DO IF ELSE
%token LESSER LESSEREQ GREATER GREATEREQ EQCOMP NOTEQ

%token <string> ID
%token <integer> INTEGER
%token <number> NUM

%type <node> Start VarInit E T F Prog IfCond DoWhlCond Condition Body Stmt
%type <string> Relop

%%

Start: Prog { display($1); YYACCEPT; } ;

Prog: IfCond
    | DoWhlCond ;

IfCond: IF '(' Condition ')' '{' Body '}' ELSE '{' Body '}' {
        ast_node_value val;
        val.ast_string = "If";
        $$ = create_node("IFCOND", "ast_string", val, print_string_value, $3, $6, $10);
      } ;

DoWhlCond: DO '{' Body '}' WHILE '(' Condition ')' {
            ast_node_value val;
            val.ast_string = "DoWhile";
            $$ = create_node("DOWHLCOND", "ast_string", val, print_string_value, $3, $7, NULL);
         } ;

Condition: F Relop F {
            ast_node_value val;
            val.ast_string = strdup($2);
            $$ = create_node("RELOP", "ast_string", val, print_string_value, $1, $3, NULL);
         } ;

Relop: LESSER   { $$ = "<"; }
     | LESSEREQ { $$ = "<="; }
     | GREATER  { $$ = ">"; }
     | GREATEREQ{ $$ = ">="; }
     | EQCOMP   { $$ = "=="; }
     | NOTEQ    { $$ = "!="; } ;

Stmt: IfCond
    | DoWhlCond ';'
    | VarInit ';' ;

Body: Stmt Body {
        ast_node_value val;
        val.ast_string = "StmtBody";
        $$ = create_node("BODY", "ast_string", val, print_string_value, $1, $2, NULL);
    }
    | Stmt ;

VarInit: ID '=' E {
	   	ast_node_value val, val_left;
		val.ast_char = '=';
		val_left.ast_string = strdup($1);
	   	$$ = create_node("ASSIGN", "ast_char", val, print_char_value, create_node("ID", "ast_string", val_left, print_string_value, NULL, NULL, NULL), $3, NULL);
       };

E: E '+' T {
 	ast_node_value val;
	val.ast_char = '+';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3, NULL); 
 }
 | E '-' T {
 	ast_node_value val;
	val.ast_char = '-';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3, NULL);
 }
 | T ;

T: T '*' F {
	ast_node_value val;
	val.ast_char = '*';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3, NULL);
 }
 | T '/' F {
	ast_node_value val;
	val.ast_char = '/';
	$$ = create_node("AOP", "ast_char", val, print_char_value, $1, $3, NULL);
 }
 | F ;

F: '(' E ')' { $$ = $2; }
 | NUM { 
 	ast_node_value val;
	val.ast_double = $1;
	$$ = create_node("NUM", "ast_double", val, print_double_value, NULL, NULL, NULL);
 }
 | INTEGER {
	ast_node_value val;
	val.ast_int = $1;
	$$ = create_node("INT", "ast_int", val, print_int_value, NULL, NULL, NULL);
 }
 | ID {
	ast_node_value val;
	val.ast_string = strdup($1);
	$$ = create_node("ID", "ast_string", val, print_string_value, NULL, NULL, NULL);
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
