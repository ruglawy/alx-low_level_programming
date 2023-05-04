#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * set_bit - sets bit
 * @n: number
 * @index: index
 *
 * Return: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}
	x = 1 << index;
	*n = (*n | x);
	return (1);
}
