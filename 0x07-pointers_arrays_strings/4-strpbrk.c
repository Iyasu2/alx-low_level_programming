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
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				s = s + i;
				break;
			}
		}
		if (counter != 0)
			break;
	}
	return (s);
}
