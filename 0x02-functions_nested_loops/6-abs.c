#include "main.h"
/**
 * _abs - Entry point
 * Description: 'printing absolute value of a number'
 * Parameters: input int n: 'number input to be converted'
 * Return: absolute value of n
 */
int _abs(int)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
