#include "main.h"
/**
 * is_lower - Entry point
 * Description: 'checking if an alphabet is lowercase'
 * Parameters: no input no return
 * Return: none
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
