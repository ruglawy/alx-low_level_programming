#include "main.h"
/**
 * print_alphabet_x10 - Prints Alphabet 10 times
 * Description: Nothing specific
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char character = 'a';
	int number  = 'z' - 'a';
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= number; j++)
		{
			_putchar(character++);
		}
		_putchar('\n');
		character = 'a';
	}
}
