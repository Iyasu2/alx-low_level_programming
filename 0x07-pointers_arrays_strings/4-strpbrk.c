#include "main.h"
/**
 * _strpbrk - Entry point
 * Description: 'first occurence of a char'
 * Parameters: two char inputs returns a char
 * @s: char input 1
 * @accept: char input 2
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (NULL);
}
