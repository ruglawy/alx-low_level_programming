#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	char *s = &str[0];

	while (*s != '\0')
	{
		s++;
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
