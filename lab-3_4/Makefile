build:
	flex lexer.l
	bison -d parser.y
	gcc -Wall parser.tab.c lex.yy.c -lfl -ly -g

test:
	./a.out < ./testcases/custom.c

test_1:
	./a.out < ./testcases/test1.c

test_2:
	./a.out < ./testcases/test2.c

test_3:
	./a.out < ./testcases/test3.c
