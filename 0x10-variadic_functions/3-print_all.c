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
	int flag = 0;

	va_start(ap, format);
	while (i < (int)(strlen(format)))
	{
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
				flag = 1;
				break;
		}
		if (i != (int)(strlen(format)) && flag == 0)
		{
			printf(", ");
		}
		i++;
		flag = 0;
	}
	printf("\n");
}
