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
	unsigned int x;

	if (n < 0)
	{
		x = n * -1;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	while (1)
	{
		if (divisor >= x)
		{
			divisor = (divisor - converter) / 9;
			break;
		}
		divisor = (divisor * 10) + 9;
		converter = (converter * 10) + 9;
		iteration++;
	}

	if (x / divisor == 0)
	{
		_putchar(x + '0');
		return;
	}

	for (i = 0; i <= iteration; i++)
	{
		int digit = x / divisor;

		x %= divisor;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
