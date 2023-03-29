#include "main.h"
/**
 * reverse_array - Reverses an array
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n / 2; i++)
	{
		*(a + i) = *(a - n - i);
	}
}
