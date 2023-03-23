#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 * Description: 'printing alphabets'
 * Parameters: no input returns an int
 * Return: Always 0 (Success)
 */
int main(void)
{
	int64_t i, j;
	int64_t h = 0;
	int64_t k = 612852475143;

	for (i = k / 2; i > 1; i--)
	{
		if (k % i == 0)
		{
			for (j = 2; j < i / 2; j++)
			{
				if (i % j == 0)
				{
					break;
				}
				h++;
			}
		}
		if (h >= (i / 2) - 2)
		{
			printf("%li\n", i);
			break;
		}
		h = 0;
	}
	return (0);
}
