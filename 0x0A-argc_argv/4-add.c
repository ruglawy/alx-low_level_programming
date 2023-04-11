#include <stdio.h>
/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ..
 */
int main(int agrc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
