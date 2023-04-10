#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Entry point
 * Description: 'concatenating two strings'
 * Parameters: two char inputs returns a char
 * @s1: char input 1
 * @s2: char input 2
 * Return: a char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		s[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		s[i + j] = s2[j];
	}

	s[i + j] = s2[j];
	return (s);
	free(s);
}

