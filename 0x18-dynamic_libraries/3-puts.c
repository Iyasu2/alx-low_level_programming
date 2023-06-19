#include "main.h"
/**
 * _puts - Entry point
 * Description: 'printing strings'
 * Parameters: char input no return
 * @str: char input
 * Return: no return
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
