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
	int countSrc = 0;
	int i;

	while (*(dest + countSrc) != '\0')
	{
		countSrc++;
	}

	for (i = 1; i <= n && *(src + i) != '\0', i++)
	{
		*(dest + countSrc) = *(src + i);
		countSrc++;
	}

	return (dest);
}
