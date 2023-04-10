#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 * Description: 'returning an allocated memory'
 * Parameters: char input returns a char
 * @str: char input
 * Return: a char
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * 1000);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		s[i] = str[i];
	}
	return (s);
	free(s);
}

