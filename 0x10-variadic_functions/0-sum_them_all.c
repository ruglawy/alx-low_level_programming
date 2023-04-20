#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all int arguments and returns result
 * @n: first argument
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int number;
	int result = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		result += number;
	}
	return (result);
}
