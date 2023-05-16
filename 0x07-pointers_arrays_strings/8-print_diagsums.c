#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * Description: 'print sum of two diagonals of a matrix'
 * Parameters: two int inputs no return
 * @a: char input 1
 * @size: char input 2
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i;
	int counter = 0;
	int counter2 = 0;
	for (i = 0; i < size; i++)
	{
		counter = counter + (*a)[i];
		counter2 = counter2 + (*a)[size - 1 - i];
		a++;
	}
	printf("%i, %i", counter, counter2);
}
