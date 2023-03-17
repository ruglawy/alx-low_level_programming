#include <stdio.h>
/**
 * main - Entry Point
 * Description: ..
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'z';
	int number = 'z' - 'a';

	for (i = 0; i <= number; i++)
	{
		putchar(character--);
	}
	putchar('\n');

	return (0);
}
