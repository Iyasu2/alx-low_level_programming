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

	for (i = 0; i < 26; i++)
	{
		if (i + 97 != 113 && i + 97 != 101)
		{
			putchar(i + 97);
		}
	}
	putchar('\n');
	return (0);
}
