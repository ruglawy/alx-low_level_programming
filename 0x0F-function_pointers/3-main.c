#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (argv[2][3] != ' ')
	{
		printf("Error\n");
		exit(98);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(a, b);
	printf("%d\n", result);

	return (0);
}
