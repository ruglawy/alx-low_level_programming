#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - ...
 * @grid: ...
 * @height: ...
 *
 * Return: ...
 */
void free_grid(int **grid, int height)
{
	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
