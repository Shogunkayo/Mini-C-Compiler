#ifndef AST_H
#define AST_H

typedef union AST_NODE_VALUE {
	char ast_char;
	int ast_int;
	double ast_double;
	char *ast_string;
} ast_node_value;

typedef struct AST_NODE {
	char *id;
	char *type;
	ast_node_value val;
	void (*print_value_fn)(struct AST_NODE *node);
	struct AST_NODE *left;
	struct AST_NODE *right;
} ast_node;

ast_node *create_node(const char *id, const char *type, ast_node_value val, void (*print_value_fn)(ast_node *node), ast_node *left, ast_node *right);
void display(ast_node *root);
void print_char_value(ast_node *node);
void print_int_value(ast_node *node);
void print_double_value(ast_node *node);
void print_string_value(ast_node *node);

#endif
