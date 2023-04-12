#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Entry point
 * Description: 'reallocate memory'
 *
 * @ptr: pointer input
 * @old_size: unsigned int input
 * @new_size: unsigned int input
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == old_size)
		return ptr;
	else if (new_size > old_size)
	{
		s = malloc(new_size);
		s = memcpy(s, ptr, old_size);
		free(ptr);
		return (s);
	}
	else if (new_size < old_size)
	{
		s = malloc(new_size);
		s = memcpy(s, ptr, new_size);
		free(ptr);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);
	free(s);
}
