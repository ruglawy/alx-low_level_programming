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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		if (*src == '\0')
		{
			*dest = *src;
		}
	}

	return &dest;
}
