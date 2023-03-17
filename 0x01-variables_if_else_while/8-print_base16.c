#include <stdio.h>
/**
 * main - Entry Point
 * Description: ..
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'a';
	int i;
	int number = 'd' - 'a';

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	for(i = 0; i <= number; i++)
	{
		putchar(character++);
	}
	putchar('\n');

	return (0);
}
