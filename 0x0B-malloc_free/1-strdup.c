#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - ...
 * @str: ...
 *
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *arr;
	int count = 0;
	int i;

	while (*(str + count) != '\0')
	{
		count++;
	}

	arr = malloc(count * sizeof(char));

	if (arr == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		*(arr + i) = *(str + i);
	}
	*(arr + count) = '\0';
	
	return (arr);
}
