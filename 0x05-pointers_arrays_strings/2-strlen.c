#include "main.h"
/**
 * _strlen - returns length of string
 * @s: array of characters(Strings)
 *
 * Return: length of strnig
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);

}
