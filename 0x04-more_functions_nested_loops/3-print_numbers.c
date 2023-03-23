#include "main.h"
/**
 * print_numbers - prints numbers
 * Return: void
 */
void print_numbers(void)
{
	char character = '0';
	int range = '9' - '0';
	int i;

	for (i = 0; i <= range; i++)
	{
		_putchar(character++);
	}
	_putchar('\n');
}
