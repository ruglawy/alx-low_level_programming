#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * get_bit - gets bit at given index
 * @n: number
 * @index: index
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < = 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
