#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - struct with 3 types in it
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct with 2 chars and a float
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */


