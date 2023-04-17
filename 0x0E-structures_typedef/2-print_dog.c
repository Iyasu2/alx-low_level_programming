#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Entry point
 * Description: 'print a struct'
 *
 * @d: struct dog input
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
