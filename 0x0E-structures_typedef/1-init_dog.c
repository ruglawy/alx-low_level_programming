#include "dog.h"
#include <stdio.h>
#include <string.h>
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
	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(dog);
		return;
	}
	strcpy(d->owner, owner);
}
