#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * power - x^y
 * @x: num
 * @y: num
 *
 * Return: x power y
 */
unsigned int power(int x, int y)
{
	if (y==0)
		return (1);
	return (x * power(x, y - 1));
}
/**
 * binary_to_uint - converts binary to decimal
 * @b: string containing binary
 *
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i, length, index;
	char num[1];

	if (b == NULL)
	{
		return (0);
	}
	length = strlen(b);
	index = length - 1;
	for (i = 0; i < length, i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; i < length; i++)
	{
		num[0] = b[i];
		number += (atoi(num) * power(2, index--));
	}
	return (number);
}
