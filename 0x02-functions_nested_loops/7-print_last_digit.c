#include "main.h"
/**
 * print_last_digit: prints last digit of a number
 * Description: stated
 * @number: number
 *
 * Return: last digit of number
 */

int print_last_digit(int number)
{
	_putchar((number % 10) + '0');
	return (number % 10);
}