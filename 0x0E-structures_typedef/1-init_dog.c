#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - Entry point
 * Description: 'initialize a struct'
 *
 * @d: struct dog input
 * @name: char input
 * @age: float input
 * @owner: char input
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (name != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		if (d->name != NULL)
			d->name = name;
	}

	d->age = age;
	if (owner != NULL)
	{
		d->owner = malloc(strlen(name) + 1);
		if (d->owner != NULL)
			d->owner = owner;
	}
}
