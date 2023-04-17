#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct with 3 types in it
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct with 2 chars and a float
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
