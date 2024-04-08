%{
	#include <stdio.h>

	int yylex (void);
	void yyerror(const char *s);
	void skipTokens(int token);

	extern int yylineno;
	extern char *yytext;
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

Start: Prog ;

Prog: INCLUDE HEADER Prog
	| INCLUDE STRLITERAL Prog
	| Main Prog
	| error
	| VarDeclr ';' Prog
	| VarInit ';' Prog
	| ArrayDeclr ';' Prog
	| ';'
	| ;

Type: INT
	| CHAR
	| FLOAT
	| DOUBLE
	| VOID ;

TypeSpecifier: CONST TypeSpecifier
			 | STATIC
			 | EXTERN
			 | VOLATILE
			 | AUTO
			 | CONST ;

TypeList: Type TypeSpecifier
		| TypeSpecifier Type
		| Type ;

Main: TypeList MAIN '(' MainArg1 ')' '{' Body '}';

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

LoopStmt: BREAK ';'
		| SnglStmt ;

SnglStmt: VarDeclr ';'
		| VarInit ';'
		| ArrayDeclr ';'
		| IfCond
		| WhileLoop
		| DoWhlLoop
		| ForLoop
		| SwitchCond
		| ';' ;

LoopBody: BREAK ';' LoopBody
		| VarDeclr ';' LoopBody
		| VarInit ';' LoopBody
		| ArrayDeclr ';' LoopBody
		| LoopIfCond LoopBody
		| WhileLoop LoopBody
		| DoWhlLoop LoopBody
		| ForLoop LoopBody
		| SwitchCond LoopBody
		| ';'
		| ;

Body: VarDeclr ';' Body
	| VarInit ';' Body
	| ArrayDeclr ';' Body
	| IfCond Body
	| WhileLoop Body
	| DoWhlLoop Body
	| ForLoop Body
	| SwitchCond Body
	| STRLITERAL Body
	| ';'
	| ;

VarDeclr: TypeList VarList ;

VarList: ID ',' VarList
	   | ID '=' VarInit ',' VarList
	   | ID 
	   | ID '=' VarInit ;

VarInit: Expr
		| ID '=' Expr
		| IncDec 
		| IncDec Expr 
		| ID '=' STRLITERAL ;

IncDec: ID INC
	  | ID DEC
	  | INC ID
	  | DEC ID ;

Expr: Expr Relop E
	| E ;

E: E '+' T
 | E '-' T
 | T ;

T: T '*' F
 | T '/' F
 | F ;

F: NUM
 | INTEGER
 | ID
 | CHARACTER
 | '(' Condition ')' 
 | '!' ID
 | '!' INTEGER
 | '!' NUM
 | '!' CHARACTER
 | '!' '(' Condition ')' ;

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

ArrayDeclr: TypeList ArrayList ;

ArrayList: ID ArrayDim ',' ArrayList
		 | ID ArrayDim 
		 | ID ArrayDim '=' '{' ArrayInit '}' ',' ArrayList
		 | ID ArrayDim '=' '{' ArrayInit '}' 
		 | ID ArrayDim '=' STRLITERAL ;

ArrayDim: '[' INTEGER ']' ArrayDim
		| '[' INTEGER ']'
		| '[' ID ']' ArrayDim
		| '[' ID ']' 
		| '[' ']' ArrayDim
		| '[' ']' ;

ArrayInit: Expr ',' ArrayInit
		 | Expr
		 | ;

IfCond: IF '(' Condition ')' SnglStmt ElseIfCond
	  | IF '(' Condition ')' '{' Body '}' ElseIfCond 
	  | IF '(' Condition ')' SnglStmt
	  | IF '(' Condition ')' '{' Body '}' ;

ElseIfCond: ELSEIF '(' Condition ')' SnglStmt ElseCond
	  | ELSEIF '(' Condition ')' '{' Body '}' ElseCond
	  | ELSEIF '(' Condition ')' SnglStmt ElseIfCond
	  | ELSEIF '(' Condition ')' '{' Body '}' ElseIfCond
	  | ELSEIF '(' Condition ')' SnglStmt
	  | ELSEIF '(' Condition ')' '{' Body '}' ;

ElseCond: ELSE SnglStmt
		| ELSE '{' Body '}' ;

LoopIfCond: IF '(' Condition ')' LoopStmt LoopElseIfCond 
	  | IF '(' Condition ')' '{' LoopBody '}' LoopElseIfCond
	  | IF '(' Condition ')' LoopStmt
	  | IF '(' Condition ')' '{' LoopBody '}' ;

LoopElseIfCond: ELSEIF '(' Condition ')' LoopStmt LoopElseCond
	  | ELSEIF '(' Condition ')' '{' LoopBody '}' LoopElseCond
	  | ELSEIF '(' Condition ')' LoopStmt LoopElseIfCond
	  | ELSEIF '(' Condition ')' '{' LoopBody '}' LoopElseIfCond
	  | ELSEIF '(' Condition ')' LoopStmt
	  | ELSEIF '(' Condition ')' '{' LoopBody '}' ;

LoopElseCond: ELSE LoopStmt
			| ELSE '{' LoopBody '}' ;

WhileLoop: WHILE '(' Condition ')' LoopStmt
		 | WHILE '(' Condition ')' '{' LoopBody '}' ;

DoWhlLoop: DO LoopStmt WHILE '(' Condition ')'
		 | DO '{' LoopBody '}' WHILE '(' Condition ')' ;

ForLoop: FOR '(' ForInit ';' ForCond ';' ForCond ')' LoopStmt
	   | FOR '(' ForInit ';' ForCond ';' ForCond ')' '{' LoopBody '}' ;

ForInit: VarDeclr
	   | ForCond ;

ForCond: Condition
	   | ;

SwitchCond: SWITCH '(' VarInit ')' '{' CaseList '}'
          | SWITCH '(' VarInit ')'  CASE INTEGER ':' LoopStmt 
		  | SWITCH '(' VarInit ')' DEFAULT ':' LoopStmt ;

CaseList: Case 
        | Case CaseList ;

Case: CASE INTEGER ':' LoopStmt
    | DEFAULT ':' LoopStmt ;

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

