#include "main.h"
/**
 * _isalpha - Checks if it's an alphabet
 * @c: character
 *
 * Return: 1 if character, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
