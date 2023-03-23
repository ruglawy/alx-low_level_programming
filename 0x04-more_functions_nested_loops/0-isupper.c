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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
