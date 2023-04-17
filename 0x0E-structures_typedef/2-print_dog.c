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
	if (d == NULL)
		exit(1);
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");

	if (d->age != 0)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: (nil)");

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)");
}
