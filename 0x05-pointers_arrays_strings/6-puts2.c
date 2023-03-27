#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	int i;
	char *s = &str[0];

	while (*s != '\0')
	{
		s++;
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
