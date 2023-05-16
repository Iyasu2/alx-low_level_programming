#include "main.h"
#include <math.h>
/**
 * print_number - Entry point
 * Description: 'printing a number using _putchar'
 * Parameters: int input no return
 * @n: int input
 * Return: no return
 */

void print_numner(int n)
{
	int i, j;
	int counter = 0;

	for (i = 0; n / pow(10, i) != 0; i++)
	{
		counter++;
	}
	_putchar(n / pow(10, counter));
	_putchar(n % pow(10, counter));
}
