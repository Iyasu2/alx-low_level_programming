#include "main.h"
/**
 * _strlen_recursion - Entry point
 * Description: 'returning length of string using recursion'
 * Parameters: char input int return
 * @s: char input
 * Return: returns length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}

	return (1 + _strlen_recursion(s + 1));
}
