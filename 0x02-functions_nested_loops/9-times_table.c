#include "main.h"
/**
 * times_table - Prints table
 * Description: ..
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int unit = (i * j) % 10;
			int tenth = (i * j) / 10;
			if (tenth != 0)
			{
				_putchar(tenth + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(unit + '0');
			if (j == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
