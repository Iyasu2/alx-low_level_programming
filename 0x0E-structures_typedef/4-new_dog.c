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
	char *s;
	char *n;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	s = malloc(strlen(name) + 1);
	if (s == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(s, name);

	n = malloc(strlen(owner) + 1);
	if (n == NULL)
	{
		free(s);
		free(new_dog);
		return (NULL);
	}
	strcpy(n, owner);
	new_dog->name = s;
	new_dog->age = age;
	new_dog->owner = n;
	return (new_dog);
}
