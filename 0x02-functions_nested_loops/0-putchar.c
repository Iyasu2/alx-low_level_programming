#include "main.h"
/**
 * main - Entry point
 * Description: 'printing using putchar'
 * Parameters: no input returns an int
 * Return: Always 0 (Success)
 */
int main(void)
{
	char no_printf[] = "_putchar";
	long unsigned int i;

	for (i = 0; i < sizeof(no_printf); i++)
	{
		_putchar(no_printf[i]);
	}
	_putchar('\n');

	return (0);
}
