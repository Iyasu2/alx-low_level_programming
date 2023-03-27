#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * Description: 'printing array of integers'
 * Parameters: two int inputs no return
 * @a: int array input
 * @n: length of array to be printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
			printf("%i", a[i]);
	}
	printf("\n");
}
