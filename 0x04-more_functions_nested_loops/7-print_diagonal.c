#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: 'printing diagonal using puts'
 * Parameters: int n input no return
 * @n : length of diagonal
 * Return: none
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
