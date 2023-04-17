#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - frees dogs!
 * @d: dog to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
