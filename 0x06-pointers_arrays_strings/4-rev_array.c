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
		int temp = *(a + i);

		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = temp;
	}
}
