#include "function_pointers.h"
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
		printf("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error");
		exit(99);
	}

	if (b == 0 && (argv[2] == "/" || argv[2] == "%"))
	{
		printf("Error");
		exit(100);
	}

	result = func(a, b);
	printf("%d", result);

	return (0);
}
