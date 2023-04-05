#include "main.h"
/**
 * _pow_recursion - Entry point
 * Description: 'returning x raised to y using recursion'
 * Parameters: 2 int inputs int return
 * @x: int input 1
 * @y: int input 2
 * Return: returns x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
