#include <stdio.h>
/**
 * main - Entry point
 * Description: idk
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character = 'a';
	int number = 'z' - 'a';
	int i;
	for(i = 0; i <= number; i++)
	{
		putchar(character++);
	}
	character = 'A';
	for(i = 0; i <= number; i++)
	{
		putchar(character++);
	}
	putchar('\n');

	return (0);

}
