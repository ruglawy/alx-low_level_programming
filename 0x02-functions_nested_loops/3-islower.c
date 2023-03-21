#include "main.h"
/**
 * is_lower - returns if character is lowercase
 * Description: ...
 *
 * Return: 0 if uppercase, 1 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
