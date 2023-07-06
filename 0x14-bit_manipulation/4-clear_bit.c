#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * clear_bit - clears bit
 * @n: number
 * @index: index
 *
 * Return: 1 if worked -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;
	if (index > 63)
	{
		return (-1);
	}
	x = 1 << index;
	if (*n & x)
	{
		*n ^= x;
	}
	return (1);
}
