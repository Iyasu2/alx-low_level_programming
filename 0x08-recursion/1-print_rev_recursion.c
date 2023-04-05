#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * Description: 'printing in reverse using recursion'
 * Parameters: char input no return
 * @s: char input
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
