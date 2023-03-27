#include "main.h"
/**
 * print_rev - Entry point
 * Description: 'printing string in reverse'
 * Parameters: char input no return
 * @s: char input
 * Return: no return
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	for (j = 0; j < i; j++)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
