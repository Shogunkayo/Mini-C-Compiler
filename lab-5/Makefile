build:
	flex lexer.l
	bison -d parser.y
	gcc -Wall parser.tab.c lex.yy.c -lfl -ly -g

test:
	./a.out < ./testcases/custom.c

test1:
	./a.out < ./testcases/test_input_1.c

test2:
	./a.out < ./testcases/test_input_2.c
