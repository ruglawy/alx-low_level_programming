#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(ap, char*);
		printf("%s", string);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
