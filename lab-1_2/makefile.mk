build:
	flex lexer.l
	bison -d parser.y
	gcc -Wall parser.tab.c lex.yy.c -lfl -ly

test:
	./a.out < ./'Test Files'/custom/test1.txt
