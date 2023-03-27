#include "main.h"
/**
 * puts2 - Entry point
 * Description: 'printing every other string'
 * Parameters: char input no return
 * @str: char input
 * Return: no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
	}

	_putchar('\n');
}
