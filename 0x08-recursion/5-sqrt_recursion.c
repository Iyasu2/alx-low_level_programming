#include "main.h"
/**
 * _sqrt_recursion - Entry point
 * Description: 'returning square root of a number using recursion'
 * Parameters: int input int return
 * @n: int input 1
 * Return: returns natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = const(n);
	if (n == 0 || n == 1)
		return (n);

	if (n < 0 || n * n < i)
	{
		return (-1);
	}
	
	if (n * n == i)
		return (n);

	_sqrt_recursion(n - 1);
}

int const(int n)
{
	return (n);
}
