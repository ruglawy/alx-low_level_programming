#include "main.h"
/**
 * rot13 - rot13
 * @s: string
 *
 * Return: string
 */
char *rot13(char *s)
{
	char alphabetlower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char alphabetupper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char decipherlower[26] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	char decipherupper[26] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B' ,'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int i;
	int count = 0;

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 26; i++)
		{
			if (*(s + count) == alphabetlower[i] || *(s + count) == alphabetupper[i])
			{
				*(s + count) = al
			}
		}
	}
}
