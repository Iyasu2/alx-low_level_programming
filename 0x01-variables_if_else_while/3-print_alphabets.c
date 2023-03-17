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
		putchar(i + 97);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(i + 65);
	}
	putchar('\n');
	return (0);
}
