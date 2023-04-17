#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Entry point
 * Description: 'create a new struct'
 *
 * @name: char input
 * @age: float input
 * @owner: char input
 * Return: a struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (name != NULL)
	{
		new_dog->name = malloc(strlen(name) + 1);
		if (new_dog->name != NULL)
			new_dog->name = name;
	}
	new_dog->age = age;
	if (owner != NULL)
	{
		new_dog->owner = malloc(strlen(owner) + 1);
		if (new_dog->owner != NULL)
			new_dog->owner = owner;
	}
	if (new_dog == NULL)
		return (NULL);
	return (new_dog);
}
