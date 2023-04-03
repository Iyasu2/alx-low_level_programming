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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
