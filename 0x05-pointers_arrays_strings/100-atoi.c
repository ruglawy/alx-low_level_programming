#include "main.h"
/**
 * _atoi - same as atoi()
 * @s: string
 *
 * Return: integer from string
 */
int _atoi(char *s)
{
	int zero = '0';
	int nine = '9';
	unsigned int number = 0;
	int negative = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			negative++;
		}
		if (*s >= zero && *s <= nine)
		{
			break;
		}
		s++;
	}

	while (*s >= zero && *s <= nine)
	{
		int digit = *s - '0';

		number = (number * 10) + digit;
		s++;
	}

	if (negative % 2 == 1)
	{
		return (number * -1);
	}
	return (number);
}
