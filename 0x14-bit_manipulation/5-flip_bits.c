#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * flip_bits - flips bits
 * @n: number
 * @m: second number
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numberofbits;

	for (numberofbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			numberofbits++;
		}
	}
	return (numberofbits);
}
