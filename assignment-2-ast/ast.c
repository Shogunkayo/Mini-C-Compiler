#ifndef AST_C
#define AST_C

#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ast_node *create_node(const char *id, const char *type, ast_node_value val, void (*print_value_fn)(ast_node *node), ast_node *left, ast_node *middle, ast_node *right) {
	ast_node *node = (ast_node *) malloc (sizeof(ast_node));
	node->id = strdup(id);
	node->type = strdup(type);
	node->val = val;
	node->print_value_fn = print_value_fn;
	node->left = left;
    node->middle = middle;
	node->right = right;

	return node;
}

void display(ast_node *root) {
	if (root != NULL) {
		root->print_value_fn(root);
		display(root->left);
		display(root->middle);
		display(root->right);
	}	
}

void print_char_value(ast_node *node) {
	printf("Value:\t%c\n", node->val.ast_char);
}

void print_int_value(ast_node *node) {
    printf("Value:\t%d\n", node->val.ast_int);
}

void print_double_value(ast_node *node) {
    printf("Value:\t%lf\n", node->val.ast_double);
}

void print_string_value(ast_node *node) {
    printf("Value:\t%s\n", node->val.ast_string);
}

#endif
