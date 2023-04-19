#include "function_pointers.h"
/**
 * int_index - searches for index of an element in an array
 * @array: array
 * @size: size of array
 * @cmp: compare function passed as parameter
 *
 * Return: index of element if found, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size == 0 || !(array))
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp != 0)
		{
			return (i);
		}
	}
	return (-1);
}
