#include "main.h"
/**
 * leet - encodes string
 * @s: string
 *
 * Return: string
 */
char *leet(char *s)
{
	int count = 0;
	int i;
	char lowerCase[] = {'a', 'e', 'o', 't', 'l'};
	char upperCase[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowerCase[i] || *(s + count) == upperCase[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
