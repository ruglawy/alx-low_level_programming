#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: ...
 * @size: ...
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc((nmemb * size) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = '0';
	}
	arr[i] = '\0';

	return (arr);
}
