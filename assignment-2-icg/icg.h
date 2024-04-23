#ifndef ICG_H
#define ICG_H

#include <stdio.h>

extern FILE* icg_f;
extern int temp_no;
extern int lable_no;

void quad_gen(char *op, char *arg1, char *arg2, char *result);
char *create_temp();

#endif
