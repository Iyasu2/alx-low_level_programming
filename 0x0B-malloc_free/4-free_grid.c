#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - Entry point
 * Description: 'freeing a 2d array'
 *
 * @grid: int input 1
 * @height: int input 2
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
