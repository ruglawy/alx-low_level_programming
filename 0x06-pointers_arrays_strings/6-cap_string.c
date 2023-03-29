#include "main.h"
/**
 * cap_string - Capitalizes every word in the string
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int count = 0;

	if (*s != '\0' && *s >= 'a' && *s <= 'z')
	{
		*s -= ('a' - 'A');
	}
	while (*(s + count) != '\0')
	{
		if (*(s + count) == ' ' || *(s + count) == '	' || *(s + count) == '\n'
				|| *(s + count) == ',' || *(s + count) == ';' ||
				*(s + count) == '.' || *(s + count) == '!' ||
				*(s + count) == '?' || *(s + count) == '\"' ||
				*(s + count) == '(' || *(s + count) == ')' ||
				*(s + count) == '{' || *(s + count) == '}')
		{
			if (*(s + count + 1) >= 'a' && *(s + count + 1) <= 'z')
			{
				*(s + count + 1) -= ('a' - 'A');
			}
		}
		count++;
	}

	return (s);
}
