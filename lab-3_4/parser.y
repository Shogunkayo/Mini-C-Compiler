%{
	#define YYSTYPE char*

	#include "sym_table.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char *s);
	int yylex();

	extern int yylineno;
	extern char *yytext;
	int type = -1;
	int scope = 0;
	int err = 0;

%}

%token VOID INT FLOAT CHAR DOUBLE ENUM STRUCT UNION SHORT LONG SIGNED UNSIGNED AUTO STATIC EXTERN VOLATILE CONST REGISTER
%token GOTO SIZEOF TYPEDEF
%token WHILE FOR DO BREAK IF ELSE ELSEIF SWITCH DEFAULT CASE
%token INCLUDE DEFINE UNDEF IFDEF IFNDEF PPIF PPELSE ENDIF
%token HEADER MAIN RETURN
%token CHARACTER ID INTEGER NUM STRLITERAL
%token DOT STRUCTPOINT SINQUOTE
%token INC DEC
%token SFTLEFT SFTRIGHT
%token SHORTADD SHORTMUL SHORTDIV SHORTSUB SHORTMOD
%token LESSER LESSEREQ GREATER GREATEREQ EQCOMP NOTEQ

%start Start

%%

Start: Prog;

Prog: INCLUDE HEADER Prog
	| INCLUDE STRLITERAL Prog
	| Main Prog
	| error
	| ';'
	| ;

Type: INT		{ type = SYM_TABLE_INT; }
	| CHAR		{ type = SYM_TABLE_CHAR; }
	| FLOAT		{ type = SYM_TABLE_FLOAT; }
	| DOUBLE	{ type = SYM_TABLE_DOUBLE; }
	| VOID 		{ type = SYM_TABLE_VOID; } ;

TypeSpecifier: CONST TypeSpecifier
			 | STATIC
			 | EXTERN
			 | VOLATILE
			 | AUTO
			 | CONST ;

TypeList: Type TypeSpecifier
		| TypeSpecifier Type
		| Type ;

Main: TypeList MAIN '(' MainArg1 ')' '{' { scope++; } StmtList '}' { scope--; } ;

MainArg1: INT ID ',' MainArg2
		| INT ID
		| ;

MainArg2: CHAR '*''*' ID ',' MainArg3
		| CHAR '*' ID '['']' ',' MainArg3
		| CHAR '*' ID '['']'
		| CHAR '*''*' ID
		| ;

MainArg3: CHAR '*''*' ID
		| CHAR '*' ID '['']'
		| ;

SnglStmt: VarDeclr ';'
		| VarInit ';'
		| IfCond
		| ';' ;

IfSnglStmt: VarInit ';'
		  | IfCond
		  | ';' ;

StmtList: SnglStmt StmtList 
		| '{' { scope++; } StmtList '}' { scope--; } ;
		| ;

VarDeclr: TypeList VarList ;

VarList: ID ',' {
	   	if (check_symbol($1, scope)) {
			printf("Variable %s already declared\n", $1);
			yyerror($1);
		}
		else {
			put_symbol($1, get_size(type), type, yylineno, scope);
		}
	   } VarList
	   | ID '=' VarInit ',' {
	   	if (check_symbol($1, scope)) {
			printf("Variable %s already declared\n", $1);
			yyerror($1);
		}
		else {
			put_symbol($1, get_size(type), type, yylineno, scope);
			$3 = type_correction(type, $3);
			if ($3 == NULL) {
				printf("%s cannot be cast to type %d\n", $3, type);
				yyerror($3);
				sprintf($3, "~");
			}
			insert_val($1, $3, scope);
		}
	   } VarList
	   | ID {
	   	if (check_symbol($1, scope)) {
			printf("Variable %s already declared\n", $1);
			yyerror($1);
		}
		else {
			put_symbol($1, get_size(type), type, yylineno, scope);
		}
	   } 
	   | ID '=' VarInit {
	   	if (check_symbol($1, scope)) {
			printf("Variable %s already declared\n", $1);
			yyerror($1);
		}
		else {
			put_symbol($1, get_size(type), type, yylineno, scope);
			$3 = type_correction(type, $3);
			if ($3 == NULL) {
				printf("%s cannot be cast to type %d\n", $3, type);
				yyerror($3);
				sprintf($3, "~");
			}
			insert_val($1, $3, scope);
		}
	   }
	   | ID '=' STRLITERAL {
	   	if (check_symbol($1, scope)) {
			printf("Variable %s already declared\n", $1);
			yyerror($1);
		}
		else {
			put_symbol($1, get_size(type), type, yylineno, scope);
			$3 = type_correction(type, $3);
			if ($3 == NULL) {
				printf("%s cannot be cast to type %d\n", $3, type);
				yyerror($3);
				sprintf($3, "~");
			}
			insert_val($1, $3, scope);
		}
	   };

VarInit: Expr
		| ID '=' Expr {
			symbol *s = get_symbol($1, scope);
			int scope_trace = scope;
			while (s == NULL && scope_trace >= 0) {
				scope_trace--;
				s = get_symbol($1, scope_trace);
			}
			if (s == NULL) {
				printf("Variable %s not declared\n", $1);
				yyerror($1);
			}
			else {
				type = s->type;
				$3 = type_correction(type, $3);
				if ($3 == NULL) {
					printf("%s cannot be cast to type %d\n", $3, type);
					yyerror($3);
					sprintf($3, "~");
				}
				insert_val($1, $3, scope_trace);
			}
		}
		| IncDec 
		| IncDec Expr 
		| ID '=' STRLITERAL {
			int scope_trace = scope;
			symbol *s = NULL;
			while (s == NULL && scope_trace > 0) {
				s = get_symbol($1, scope_trace);
				scope_trace--;
			}
			if (s == NULL) {
				printf("Variable %s not declared\n", $1);
				yyerror($1);
			}
			else {
				// no support for pointers currently
				// only 'char' and 'int' can be initialized with 'char *' (strliteral)
				if (s->type == SYM_TABLE_DOUBLE	|| s->type == SYM_TABLE_VOID || s->type == SYM_TABLE_FLOAT) {
					printf("Incompatible types when initiliazing type '%d' using type 'char *'\n", s->type);
					yyerror($1);					
				}
				else {
					insert_val($1, $3, scope);
				}
			}
		};

IncDec: ID INC
	  | ID DEC
	  | INC ID
	  | DEC ID ;

Expr: Expr Relop E
	| E 

E: E '+' T {
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf($$, "%d", (atoi($1) + atoi($3)));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf($$, "%lf", (atof($1) + atof($3)));
	else {
		printf("Unsupported type for operation '+'\n");
		yyerror($$);
		sprintf($$, "~");
	}
 }
 | E '-' T {	
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf($$, "%d", (atoi($1) - atoi($3)));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf($$, "%lf", (atof($1) - atof($3)));
	else {
		printf("Unsupported type for operation '-'\n");
		yyerror($$);
		sprintf($$, "~");
	}
 }
 | T ;

T: T '*' F {
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf($$, "%d", (atoi($1) * atoi($3)));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf($$, "%lf", (atof($1) * atof($3)));
	else {
		printf("Unsupported type for operation '*'\n");
		yyerror($$);
		sprintf($$, "~");
	}
 }
 | T '/' F {
	if (type == SYM_TABLE_INT || type == SYM_TABLE_CHAR)
		sprintf($$, "%d", (atoi($1) / atoi($3)));
	else if (type == SYM_TABLE_FLOAT || type == SYM_TABLE_DOUBLE)
		sprintf($$, "%lf", (atof($1) / atof($3)));
	else {
		printf("Unsupported type for operation '/'\n");
		yyerror($$);
		sprintf($$, "~");
	}
 }
 | F ;

F: Number
 | ID {
	symbol *s = get_symbol($1, scope);
	if (s == NULL) {
		printf("Variable %s not declared\n", $1);
		yyerror($$);
		sprintf($$, "~");
	}
	else {
		sprintf($$, s->val);
	}
 }
 | CHARACTER
 | '(' Condition ')' 
 | '!' ID
 | '!' INTEGER
 | '!' NUM
 | '!' CHARACTER
 | '!' '(' Condition ')' ;

Number: NUM
	  | '+' NUM { $$ = $2; }
	  | '-' NUM { $$ = get_negative($2); }
	  | INTEGER
	  | '+' INTEGER { $$ = $2; }
	  | '-' INTEGER { $$ = get_negative($2); } ;

Condition: VarInit Logical Condition
		 | VarInit ;

Logical: '&''&'
	   | '|''|' ;

Relop: LESSER
	 | LESSEREQ
	 | GREATER
	 | GREATEREQ
	 | EQCOMP
	 | NOTEQ ;

IfCond: IF '(' Condition ')' IfSnglStmt ElseCond
	  | IF '(' Condition ')' '{' { scope++; } StmtList { scope--; } '}' ElseCond;

ElseCond: ELSE IfSnglStmt
		| ELSE '{' { scope++; } StmtList { scope--; } '}'
		| ;

%%

int main() {
	yylineno = 1;
	t = init_table();

	if (!yyparse() && !err) {
		printf("Parsing successful\n");
	}
	else {
		printf("Parsing failed\n");
	}

	display();

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

