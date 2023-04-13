#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: numbers of bytes
 *
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	char *newString;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + count1) != '\0')
	{
		count1++;
	}

	while (*(s2 + count2) != '\0' && count2 < n)
	{
		count2++;
	}

	newString = malloc(sizeof(char) * ((count1 + count2) + 1));
	
	if (newString == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count1; i++)
	{
		*(newString + i) = *(s1 + i);
	}
	for (i = 0; i < count2; i++)
	{
		*(newString + i + count1) = *(s2 + i);
	}

	*(newString + i + count1) = '\0';

	return (newString);
}
