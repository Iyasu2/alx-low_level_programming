#include "main.h"
/**
 * wildcmp - Entry point
 * Description: 'checking if strings are identical'
 * Parameters: 2 char inputs and one int return
 * @s1: char input 1
 * @s2: char input 2
 * Return: returns 1 if strings identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else
	{
		return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
	}
}
