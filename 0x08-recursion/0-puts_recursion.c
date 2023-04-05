#include "main.h"
/**
 * _puts_recursion - Entry point
 * Description: 'printing using recursion'
 * Parameters: char input no return
 * @s: char input
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
