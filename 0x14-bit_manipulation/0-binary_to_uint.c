#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Entry point
 * Description: 'convert binary to uint'
 *
 * @b: char input
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		a += (pow(2, strlen(b) - 1 - i)) * (b[i] - '0');
	}
	return (a);
}
/**
 * pow - Entry point
 * Description: 'calculate the power of'
 *
 * @a: double input
 * @b: double input
 * Return: double
 */
double pow(double a, double b)
{
	double power = 1;
	int i;

	for (i = 0; i < b; i++)
	{
		power = power * a;
	}
	return power;
}




