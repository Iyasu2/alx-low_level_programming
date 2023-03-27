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
	int length = 0;

	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
