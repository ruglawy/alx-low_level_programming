#include <stdlib.h>
#include "function_pointers.h"
/**
 * op_add - addition operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: addition of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
