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
	int i, n;

	if (b == NULL)
		return (0);

	for (i = 0, n = strlen(b); i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		a <<= 1;
		if (b[i] == '1')
			a += 1;
	}
	return (a);
}
