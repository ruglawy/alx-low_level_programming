#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates an instance of struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->name == NULL || d->owner == NULL)
	{
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	return (d);
}
