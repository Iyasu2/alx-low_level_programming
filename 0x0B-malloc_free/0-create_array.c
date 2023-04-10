#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * Description: 'creating an array of chars'
 * Parameters: int and char inputs returns a char
 * @size: int input
 * @c: char input
 * Return: a char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
