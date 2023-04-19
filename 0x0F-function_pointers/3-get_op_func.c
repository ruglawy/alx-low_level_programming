#include "function_pointers.h"
#include <string.h>
/**
 * get_op_func - gets operator from user
 * @s: idk
 * @a: integer
 * @b: integer
 *
 * Return: result
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != "NULL")
	{
		if (!(strcmp(ops[i].op, s)))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
