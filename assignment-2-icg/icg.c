#ifndef ICG_C
#define ICG_C

#include "icg.h"
#include <stdio.h>
#include <stdlib.h>

void quad_gen(char *op, char *arg1, char *arg2, char *result) {
	icg_f = fopen("output/icg.txt", "a");
	fprintf(icg_f, "%s, %s, %s, %s\n", op, arg1, arg2, result);
	fclose(icg_f);
}

char *create_temp() {
	int length = snprintf(NULL, 0, "%d", temp_no);
	char *temp = (char *) malloc(sizeof(char) * (4 + length));
	snprintf(temp, 4 + length, "t%d", temp_no++);

	return temp;
}

char *create_label() {
	int length = snprintf(NULL, 0, "%d", label_no);
	char *label = (char *) malloc(sizeof(char) * (4 + length));
	snprintf(label, 4 + length, "L%d", label_no++);

	return label;
}

#endif
