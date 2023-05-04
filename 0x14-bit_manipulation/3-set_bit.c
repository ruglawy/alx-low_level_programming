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
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
