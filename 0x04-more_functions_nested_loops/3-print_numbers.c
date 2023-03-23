#include "main.h"
/**
 * print_numbers - Entry point
 * Description: 'printing numbers using putchar'
 * Parameters: no input no return
 * Return: none
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
