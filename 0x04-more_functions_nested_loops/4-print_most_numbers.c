#include "main.h"
/**
 * print_most_numbers - prints all numbers except 2, 4
 * Return: void
 */
void print_most_numbers(void)
{
	char character = '0';
	int range = '9' - '0';
	int i;

	for (i = 0; i <= range; i++)
	{
		if (!(character == '2' || character == '4'))
		{
			_putchar(character);
		}
		character++;
	}
	_putchar('\n');
}
