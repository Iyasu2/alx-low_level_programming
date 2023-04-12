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
	if (malloc(b) == NULL)
		exit (0);

	return (malloc(b));
}
