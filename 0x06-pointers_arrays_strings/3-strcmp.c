#include "main.h"
/**
 * _strcmp - same as strcmp()
 * @s1: first string
 * @s2: second string
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int countS1 = 0;
	int countS2 = 0;

	while (*(s1 + countS1) != '\0')
	{
		countS1++;
	}

	while (*(s2 + countS2) != '\0')
	{
		countS2++;
	}

	return (countS1 - countS2);
}
