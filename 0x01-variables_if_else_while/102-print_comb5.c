#include <stdio.h>

/**
 * main - Entry point
 * Description: 'printing alphabets'
 * Parameters: no input returns an int
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int h;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (h = j + 1; h < 10; h++)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(h + 48);
					
					if (i != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
