#include <stdio.h>
/**
 * main - Entry Point
 * Description: Idk
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'a';
	int ascii = 'z' - 'a';
	int i;

	for (i = 0; i <= ascii; i++)
	{
		putchar(character++);
	}
	putchar('\n');

	return (0);
}
