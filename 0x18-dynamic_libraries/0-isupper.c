#include "main.h"
/**
 * _isupper - Entry point
 * Description: 'checking if an alphabet is uppercase'
 * Parameters: int 'c'
 * @c: character to be checked
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
