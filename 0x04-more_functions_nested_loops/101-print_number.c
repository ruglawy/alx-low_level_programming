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
	
	while (true)
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

		x = x % divisor;
		_putchar(digit + '0');
		divisor = divisor / 10;
	}
}
