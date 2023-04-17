#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog
 * @d: dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s", d->name);
	}
	else
	{
		printf("Name: (nil)");
	}
	if (d->age != NULL)
	{
		printf("Age: %f", d->age);
	}
	else
	{
		printf("Age: (nil)");
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s", d->owner);
	}
	else
	{
		printf("Owner: (nil)");
	}
}
