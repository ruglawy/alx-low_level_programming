#include "main.h"
/**
 * _isupper - Checks is uppercase
 * Description: ...
 * @c: character
 *
 * Return: 1 is uppercase, zero otherwise
 */

int _isupper(int c)
{
	int range = 'Z' - 'A';
	int i;
	
	for (i = 'A'; i <= range; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
