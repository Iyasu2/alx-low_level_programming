#include "main.h"
/**
 * factorial - Entry point
 * Description: 'returning factorial of a number using recursion'
 * Parameters: int input int return
 * @n: int input
 * Return: returns factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
