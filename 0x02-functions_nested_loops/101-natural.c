#include <stdio.h>
/**
 * main - Entry Point
 * Description: ..
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (!(i % 3))
		{
			sum += i;
		}
		else if (!(i % 5))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
