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

	for (i = 26; i > 0; i--)
	{
		putchar(i + 96);
	}
	putchar('\n');
	return (0);
}
