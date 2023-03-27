#include "main.h"
/**
 * print_line - Entry point
 * Description: 'printing a line using puts'
 * Parameters: int n input no return
 * @n : input that tells the length of line
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
