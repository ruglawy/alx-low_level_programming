#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char *str = &s[0];

	while (*str != '\0')
	{
		str++;
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
