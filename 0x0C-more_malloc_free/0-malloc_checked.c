#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - ...
 * @b: ...
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
