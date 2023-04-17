#include "dog.h"
#include <stdio.h>
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
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

		printf("Age: %.6f\n", d->age);

		 printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
