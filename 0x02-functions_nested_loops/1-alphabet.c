#include "main.h"
/**
 * print_alphabet -  prints alphabet
 * main - Entry Point
 * Description: idk
 *
 *
 */

void print_alphabet(void)
{
	char character = 'a';
	int i;
	int number = 'a' - 'z';

	for (i = 0; i <= number; i++)
	{
		_putchar(character);
	}
	_putchar('\n');

}
