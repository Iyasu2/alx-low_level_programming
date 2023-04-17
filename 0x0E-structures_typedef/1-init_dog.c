#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
