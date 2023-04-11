#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - ...
 * @s1: ..
 * @s2: ...
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int count1 = 0;
	int count2 = 0;
	int i;

	while (*(s1 + count1) != '\0')
	{
		count1++;
	}
	while (*(s2 + count2) != '\0')
	{
		count2++;
	}

	str = malloc((count1 + count2 + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count1; i++)
	{
		*(str + i) = *(s1 + i);
	}
	for (i = 0; i < count2; i++)
	{
		*(str + i) = *(s2 + i);
	}

	return (str);
}
