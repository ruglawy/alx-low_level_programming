#include "main.h"
/**
 * _strncat - same as strncat()
 * @dest: destination
 * @src: source
 * @n: number of characters
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int countDest = 0;
	int i;

	while (*(dest + countDest) != '\0')
	{
		countDest++;
	}

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + countDest) = *(src + i);
		countDest++;
	}

	*(dest + countDest) = '\0';

	return (dest);
}
