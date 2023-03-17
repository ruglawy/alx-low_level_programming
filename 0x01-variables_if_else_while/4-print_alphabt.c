#include <stdio.h>
/**
 * main - Entry Point
 * Description: ...
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character = 'a';
	int number = 'z' - 'a';
	int i;

	for (i = 0; i <= number; i++)
	{
		if (character != 'e' && character != 'q')
		{
			putchar(character);
		}
		character++;
	}

	return (0);
}
