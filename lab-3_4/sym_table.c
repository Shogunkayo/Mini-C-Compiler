#include "sym_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

table *init_table() {
	table *t = (table *)malloc(sizeof(table));
	t->head = NULL;

	return t;
}

void put_symbol(char *name, int size, int type, int lineno, int scope) {
	symbol *s = (symbol *)malloc(sizeof(symbol));
	s->name = name;
	s->size = size;
	s->type = type;
	s->lineno = lineno;
	s->scope = scope;
	s->val = "~";
	s->next = NULL;

	if (t->head == NULL)
		t->head = s;
	else {
		symbol *temp = t->head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = s;
	}
}

symbol *get_symbol(char *name, int scope) {
	symbol *temp = t->head;
	while (temp != NULL) {
		if (strcmp(name, temp->name) == 0 && scope == temp->scope)
			return temp;
		temp = temp->next;
	}

	return NULL;
}

int check_symbol(char *name, int scope) {
	symbol *temp = t->head;
	while (temp != NULL) {
		if (strcmp(name, temp->name) == 0 && scope == temp->scope)
			return 1;
		temp = temp->next;
	}

	return 0;
}

int insert_val(char *name, char *val, int scope) {
	if (strcmp(val, "~") == 0)
		return 0;

	symbol *temp = t->head;
	while (temp != NULL) {
		if (strcmp(name, temp->name) == 0 && scope == temp->scope) {
			temp->val = strdup(val);
			free(val);
			return 1;
		}
		temp = temp->next;
	}

	return 0;
}

int get_type(char *val) {
	// Check for char type
    if (val[0] == '\'' && val[strlen(val) - 1] == '\'' && strlen(val) < 5) {
        return SYM_TABLE_CHAR;
    }

    // Check for double type (contains dot and can be converted to double)
    char* endptr;
    strtod(val, &endptr);
    if (*endptr == '\0') {
        return SYM_TABLE_DOUBLE;
    }

    // Check for float type (contains dot and cannot be converted to double)
    if (strchr(val, '.') != NULL) {
        return SYM_TABLE_FLOAT;
    }

    // Check for int type (only contains digits)
    int i = 0;
    while (val[i] != '\0') {
        if (val[i] < '0' || val[i] > '9') {
            return -1;
        }
        i++;
    }
	return SYM_TABLE_INT;
}

int get_size(int type) {
	switch(type) {
		case 1:	return 1;
		case 2: return 4;
		case 3: return 4;
		case 4: return 8;
		default: return -1;
	}
}

void display() {
	printf("Name\tSize\tType\tLineno\tScope\tValue\n");

    symbol *temp = t->head;
    while (temp != NULL) {
        printf("%s\t%d\t%d\t%d\t%d\t%s\n", temp->name, temp->size, temp->type, temp->lineno, temp->scope, temp->val);
        temp = temp->next;
    }
}

char *type_correction(int type, char *val) {
	char *corrected_val = NULL;
	switch(type) {
		case SYM_TABLE_CHAR: {
								if (get_type(val) == SYM_TABLE_CHAR)
									corrected_val = val;
								else {
									int i_val = atoi(val);
									i_val %= 256;
									corrected_val = malloc(2);
									corrected_val[0] = i_val;
									corrected_val[1] = '\0';
								}
									
							 };
		case SYM_TABLE_INT: {
								int i_val = atoi(val);
								if (get_type(val) == SYM_TABLE_CHAR)
									i_val = (int) val[1];
								int length = snprintf(NULL, 0, "%d", i_val);
								corrected_val = malloc(length + 1);
								snprintf(corrected_val, length + 1, "%d", i_val);
								break;
							}
		case SYM_TABLE_FLOAT: {
								float f_val = atof(val);
								if (get_type(val) == SYM_TABLE_CHAR)
									f_val = (float) val[1];
								int length = snprintf(NULL, 0, "%f", f_val);
								corrected_val = malloc(length + 1);
								snprintf(corrected_val, length + 1, "%f", f_val);
								break;
							  }
		case SYM_TABLE_DOUBLE: {
								double d_val = atof(val);
								if (get_type(val) == SYM_TABLE_CHAR)
									d_val = (double) val[1];
								int length = snprintf(NULL, 0, "%lf", d_val);
								corrected_val = malloc(length + 1);
								snprintf(corrected_val, length + 1, "%lf", d_val);
								break;
							   }
	}

	return corrected_val;
}

char *get_negative(char *val) {
	double d_val = atof(val);
	d_val = -d_val;
	int length = snprintf(NULL, 0, "%lf", d_val);
	char *corrected_val = malloc(length + 1);
	snprintf(corrected_val, length + 1, "%lf", d_val);

	return corrected_val;
}
