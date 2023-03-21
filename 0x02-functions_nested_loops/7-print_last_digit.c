#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: 'printing last digit of a number'
 * Parameters: input int n:
 * @n: the input to check
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (n * -1) % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
