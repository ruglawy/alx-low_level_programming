#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse using recursion
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == NULL)
	{
		_putchar('\n');
	}
	s++;
	_print_rev_recursion(s);
}
