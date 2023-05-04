#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - Entry point
 * Description: 'print binary'
 *
 * @n: unsigned long int input
 * Return: none
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
