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
	int k, i, j, h;
	int **s;

	if (width < 1 || height < 1)
		return (NULL);

	s = malloc((width) * (sizeof(int *)));
	if (s == NULL)
		return (NULL);
	printf("%li\n", sizeof(s));
	for (k = 0; k < width; k++)
	{
		s[k] = malloc(sizeof(int) * height);
		if (s[k] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
	for (h = 0; h < width; h++)
	{
		free(s[h]);
	}
	free(s);
}
