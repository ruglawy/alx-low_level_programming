#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 *
 * Return: ...
 */
int **alloc_grid(int width, int height)
{
	int** arr = (int**)malloc(width * sizeof(int*));
	int i, j;

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = (int*)malloc(height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
