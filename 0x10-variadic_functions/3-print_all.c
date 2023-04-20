#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - can print anything of any format
 * @format: format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *string;

	va_start(ap, format);
	while (i < (int)(strlen(format)))
	{
		if (i != 0 && (format[i] == 'c' || format[i] == 's' || format[i] == 'i' || format[i] == 'f'))
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				string = va_arg(ap, char*);
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
}
