#include "function_pointers.h"
/**
 * array_iterator - executes function on each array element
 * @array: array
 * @size: size of array
 * @action: function passed as parameter
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
