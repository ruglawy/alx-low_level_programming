#include "main.h"
/**
 * print_integer - prints integer using _putchar
 * Return: void
 */
void print_number(int n)
{
	int divisor = 99;
	int converter = 9;
	int iteration = 1;
	int i;
	int digit;
	
	while (true)
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
		digit = x / divisor;
		n = n % divisor;
		_putchar(digit + '0');
		divisor = divisor / 10;
	}
}
