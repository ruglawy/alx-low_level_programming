#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - initialize a dog
 * @d: dog's struct instance
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	d->name = malloc((strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return;
	}
	strcpy(d->owner, owner);
}
