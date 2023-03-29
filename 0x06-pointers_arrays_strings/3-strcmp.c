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

	while (*(s1 + countS1) != '\0' && *(s2 + countS2) != '\0')
	{
		if (*(s1 + countS1) != *(s2 + countS2))
		{
			return (*(s1 + countS1) - *(s2 + countS2));
		}
		countS1++;
		countS2++;
	}

	if (*(s1 + countS1) != '\0')
	{
		return (*(s1 + countS1));
	}

	if (*(s2 + countS2) != '\0')
	{
		return (*(s2 + countS2) * -1);
	}

	return (0);
}
