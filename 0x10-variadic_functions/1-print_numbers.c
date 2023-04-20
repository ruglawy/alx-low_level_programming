#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers in a variadic function
 * @separator: separates numbers
 * @n: number of numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int number;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		printf("%d", number);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
