#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * flip_bits - Entry point
 * Description: 'flip bits'
 *
 * @n: unsigned long int input
 * @m: unsigned long int input
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int common = n ^ m;
	unsigned int count = 0;

	while (common != 0)
	{
		count += common & 1;
		common >>= 1;
	}

	return (count);
}
