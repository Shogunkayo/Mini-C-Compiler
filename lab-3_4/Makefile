build:
	flex lexer.l
	bison -d parser.y
	gcc -Wall parser.tab.c lex.yy.c -lfl -ly -g

test:
	./a.out < ./testcases/custom.c

test1:
	./a.out < ./testcases/test1.c

test2:
	./a.out < ./testcases/test2.c

test3:
	./a.out < ./testcases/test3.c
