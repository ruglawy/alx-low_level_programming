#include "main.h"
/**
 * _strncpy - same as strncpy()
 * @dest: destination
 * @src: source
 * @n: characters
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int countDest = 0;
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + countDest) = *(src + i);
		countDest++;
	}
	*(dest + countDest) = '\0';

	return (dest);
}
