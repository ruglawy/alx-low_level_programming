#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array with malloc
 * @size: size
 * @c: first character
 *
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));

	arr[0] = c;
	return arr;
}
