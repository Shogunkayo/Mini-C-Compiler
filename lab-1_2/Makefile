build:
	flex lexer.l
	bison -d parser.y
	gcc -Wall parser.tab.c lex.yy.c -lfl -ly

test:
	./a.out < ./testcases/custom/test1.txt

test_valid_1:
	./a.out < ./testcases/valid/lab-1_test-1_valid.c

test_valid_2:
	./a.out < ./testcases/valid/lab-1_test-2_valid.c

test_invalid_1:
	./a.out < ./testcases/invalid/lab-1_test-1_invalid.c

test_invalid_2:
	./a.out < ./testcases/invalid/lab-1_test-1_invalid.c
