#include "main.h"
/**
 * _strcpy - copies string to string
 * @dest: destination
 * @src: source
 *
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	char *str = &src[0];

	while (*str != '\0')
	{
		*dest = *str;
		str++;
		dest++;
		if (*str == '\0')
		{
			*dest = *str;
		}
	}

	return dest;
}
