#include <string.h>
#include <math.h>
#include <stdlib.h>
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
		a += ((int)(pow(2, strlen(b) - 1 - i)) * (b[i] - '0'));
	}
	return (a);
}




