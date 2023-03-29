#include "main.h"
/**
 * string_toupper - same as toUpper()
 * @s: string
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			*(s + count) -= ('a' - 'A');
		}
		count++;
	}
	return (s);
}
