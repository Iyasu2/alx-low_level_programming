#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Entry point
 * Description: 'create an array of integers'
 *
 * @min: int input
 * @max: int input
 * Return: an int
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		s[i] = min + i;
	}

	return (s);
	free(s);
}
