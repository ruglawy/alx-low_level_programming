#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range in array
 * @min: min
 * @max: max
 *
 * Return: ptr to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(int) * (max - min + 1); i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
