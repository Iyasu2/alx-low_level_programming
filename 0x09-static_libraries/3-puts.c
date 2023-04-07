#include "main.h"
/**
 * _puts - Entry point
 * Description: 'printing strings'
 * Parameters: char input no return
 * @str: char input
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
