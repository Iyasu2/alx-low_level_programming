#include "main.h"
/**
 * print_square - Entry point
 * Description: 'printing a square using puts'
 * Parameters: int size input no return
 * @size : size of square
 * Return: none
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
