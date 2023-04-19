#ifndef CALC_H
#define CALC_H
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
