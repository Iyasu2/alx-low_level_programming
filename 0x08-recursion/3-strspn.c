#include "main.h"
/**
 * _strspn - Entry point
 * Description: 'length of chars containing the other char'
 * Parameters: two char inputs returns an unsigned int
 * @s: char input 1
 * @accept: char input 2
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (i);
}
