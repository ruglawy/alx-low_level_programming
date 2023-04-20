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
	int length = strlen(format);
	int i = 0;
	char ch;
	int number;
	float fnumber;
	char *string;
	int flag = 0;

	va_start(ap, format);
	while (i < length)
	{
		switch(format[i])
		{
			case 'c':
				ch = va_arg(ap, int);
				printf("%c", ch);
				break;
			case 'f':
				fnumber = va_arg(ap, double);
				printf("%f", fnumber);
				break;
			case 's':
				string = va_arg(ap, char*);
				printf("%s", string);
				break;
			case 'i':
				number = va_arg(ap, int);
				printf("%d", number);
				break;
			default:
				flag = 1;
				break;
		}
		if (i != (length - 1) && flag == 0)
		{
			printf(", ");
		}
		i++;
		flag = 0;
	}
	printf("\n");
}
