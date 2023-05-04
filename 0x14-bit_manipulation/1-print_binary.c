#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * po - power
 * @x: x
 * @y: y
 *
 * Return: k
 */
unsigned int po(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * power(x, y - 1));
}
/**
 * print_binary - converts int to binary and prints it.
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int p = 0;
	
	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	while (1)
	{
		if (po(2, p) > n)
		{
			p--;
			break;
		}
		p++;
	}
	for (i = p; i >= 0; i--)
	{
		if (po(2, i) <= n)
		{
			printf("%d", 1);
			n -= po(2, i);
		}
		else
		{
			printf("%d", 0);
		}
	}
}
