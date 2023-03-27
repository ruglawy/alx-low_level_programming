#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
