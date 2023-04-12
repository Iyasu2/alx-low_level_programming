#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 * Description: 'allocate memory'
 *
 * @b: unsigned int input
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
	free(s);
}
