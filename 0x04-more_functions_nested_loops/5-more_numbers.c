#include "main.h"
#include <stdbool.h>
/**
 * more_numbers - prints numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	char character = '0';
	int range = '9' - '0';
	int i, j;
	bool flag = false;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (flag)
			{
				_putchar('1');
			}
			_putchar(character++);
			if (character > '9')
			{
				flag = true;
				character = '0';
			}	
		}
		character = '0';
		flag = false;
		_putchar('\n');	
	}
}
