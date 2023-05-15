#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * clear_bit - Entry point
 * Description: 'set value of a bit to 0 at a given index'
 *
 * @n: unsigned long int input
 * @index: unsigned int input
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~((unsigned long int)(pow(2, index)));
	return (1);
}
/**
 * pow - Entry point
 * Description: 'power of'
 *
 * @a: double input
 * @b: double input
 * Return: double
 */
double pow(double a, double b)
{
	double power = 1, i;

	for (i = 0; i < b; i++)
	{
		power = power * a;
	}
	return (power);
}
