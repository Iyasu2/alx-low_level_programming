#include "main.h"
/**
 * puts_half - Entry point
 * Description: 'printing half of a string'
 * Parameters: char input no return
 * @str: char input
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; *str != '\0'; i++)
	{
		str++;
	}

	if ((i - 1) % 2 == 0)
	{
		for (j = (i - 1) / 2; j >= 0; j--)
		{
			_putchar(*(str - j - 1));
		}
	}
	else
	{
		for (j = (i - 2) / 2; j >= 0; j--)
		{
			_putchar(*(str - j - 1));
		}
	}
	_putchar('\n');
}
