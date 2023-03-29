#include "main.h"
/**
 * print_number - prints number using putchar()
 * @n: number
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int divisor = 99;
	unsigned int converter = 9;
	int iteration = 1;
	int i;

	while (1)
	{
		if (divisor >= n)
		{
			divisor = (divisor - converter) / 9;
			break;
		}
		divisor = (divisor * 10) + 9;
		converter = (converter * 10) + 9;
		iteration++;
	}

	if (n / divisor == 0)
	{
		_putchar(n + '0');
		return;
	}

	for (i = 0; i <= iteration; i++)
	{
		int digit = n / divisor;

		n %= divisor;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
