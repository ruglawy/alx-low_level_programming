#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_binary - converts int to binary and prints it.
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int p = 0, i;
	
	while (1)
	{
		if (power(2, p) > n)
		{
			p--;
			break;
		}
		p++;
	}
	for (i = p; i >= 0; i++)
	{
		if (power(2, i) <= n)
		{
			printf("%d", 1);
			n -= power(2, i);
		}
		else
		{
			printf("%d", 0);
		}
	}
}
