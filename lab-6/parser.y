%{
	
	#define YYSTYPE char*

	#include "icg.c"

	int yylex (void);
	void yyerror(const char *s);
	void skipTokens(int token);

	extern int yylineno;
	extern char *yytext;
	int err = 0;
	int temp_no = 1;

	FILE* icg_f;
%}

%start Start

%token ID NUM INTEGER

%%

Start: VarInit { YYACCEPT; } ;

VarInit: ID '=' E { quad_gen("=", $3, " ", $1); };

E: E '+' T {
 	$$ = create_temp();
	quad_gen("+", $1, $3, $$);
 }
 | E '-' T {
	$$ = create_temp();
	quad_gen("-", $1, $3, $$);
 }
 | T ;

T: T '*' F {
 	$$ = create_temp();
	quad_gen("*", $1, $3, $$);
}
 | T '/' F {
 	$$ = create_temp();
	quad_gen("/", $1, $3, $$);
}
 | F ;

F: '(' E ')' { $$ = $2; }
 | NUM
 | INTEGER
 | ID ;

%%

int main() {
	icg_f = fopen("output/icg.txt", "w");
	fclose(icg_f);

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
