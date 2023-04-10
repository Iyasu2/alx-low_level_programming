#include <stdlib.h>
#include <string.h>
#include "main.h"

char *nulls1(char *a, char *b);
char *nulls2(char *a, char *b);
char *nonull(char *a, char *b, char *c);
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
	char *s;

	if (s1 == NULL && s2 != NULL)
	{
		s = malloc((sizeof(char) * strlen(s2)) + 1);
		s = nulls1(s, s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s = malloc((sizeof(char) * strlen(s1)) + 1);
		s = nulls2(s, s1);
	}

	else if (s1 == NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * 1);
		s[0] = '\0';
	}
	else
	{
		s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
		s = nonull(s, s1, s2);
	}

	if (s == NULL)
		return (NULL);

	return (s);
	free(s);
}
/**
 * nulls1 - Entry point
 * Description: 'if s1 is null'
 *
 * @a: char input 1
 * @b: char input 2
 * Return: a char
 */
char *nulls1(char *a, char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		a[i] = b[i];
	}
	a[i] = b[i];
	return (a);
}
/**
 * nulls2 - Entry point
 * Description: 'if s2 is null'
 *
 * @a: char input 1
 * @b: char input 2
 * Return: a char
 */
char *nulls2(char *a, char *b)
{
	int j;

	for (j = 0; b[j] != '\0'; j++)
	{
		a[j] = b[j];
	}
	a[j] = b[j];
	return (a);
}
/**
 * nonull - Entry point
 * Description: 'if no null'
 *
 * @a: char input 1
 * @b: char input 2
 * @c: char input 3
 * Return: a char
 */
char *nonull(char *a, char *b, char *c)
{
	int k, h;

	for (k = 0; b[k] != '\0'; k++)
	{
		a[k] = b[k];
	}
	for (h = 0; c[h] != '\0'; h++)
	{
		a[k + h] = c[h];
	}
	a[k + h] = c[h];
	return (a);
}
