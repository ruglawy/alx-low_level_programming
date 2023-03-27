#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: pointer that hold first integer
 * @b: pointer that holds second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
