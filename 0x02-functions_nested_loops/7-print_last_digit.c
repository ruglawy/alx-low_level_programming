#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints last digit of a number
 * Description: stated
 * @number: number
 *
 * Return: last digit of number
 */

int print_last_digit(int number)
{
	if (number < 0)
	{
		_putchar('0' + (-(number % 10)));
		return (-(number % 10));

	}
	_putchar((number % 10) + '0');
	return (number % 10);
}
