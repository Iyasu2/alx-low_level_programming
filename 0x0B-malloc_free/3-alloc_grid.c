#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - Entry point
 * Description: 'returning a 2d array'
 *
 * @width: int input 1
 * @height: int input 2
 * Return: an int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			{
				s[i][j] = 0;
			}
	}
	return (s);
}
