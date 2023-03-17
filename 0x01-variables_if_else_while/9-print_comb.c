#include <stdio.h>
/**
 * main - Entry Point
 * Description: .. 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		if (i == 9)
		{
			putchar(48 + i);
		}
		else
		{
			putchar(48 + i);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
