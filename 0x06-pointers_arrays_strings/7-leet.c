#include "main.h"
/**
 * leet - encodes string
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) == 'a' || *(s + count) == 'A')
		{
			*(s + count) = 4 + '0';
		}
		else if (*(s + count) == 'e' || *(s + count) == 'E')
		{
			*(s + count) = 3 + '0';
		}
		else if (*(s + count) == 'o' || *(s + count) == 'O')
		{
			*(s + count) = 0 + '0'
		}
		else if (*(s + count) == 't' || *(s + count) == 'T')
		{
			*(s + count) = 7 + '0';
		}
		else if (*(s + count) == 'l' || *(s + count) == 'L')
		{
			*(s + count) = 1 + '0';
		}
		count++;
	}

	return (s);
}
