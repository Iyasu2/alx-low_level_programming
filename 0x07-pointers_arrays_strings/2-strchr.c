#include "main.h"
/**
 * _strchr - Entry point
 * Description: 'searching for a character in a string'
 * Parameters: two char inputs returns a char
 * @s: char input 1
 * @c: char input 2
 * Return: modified char
 */
char *_strchr(char *s, char c)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			counter++;
			break;
		}
	}

	if (counter == 0)
		return (NULL);

	return (s);
}
