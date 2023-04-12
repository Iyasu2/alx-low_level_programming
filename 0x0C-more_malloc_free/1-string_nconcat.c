#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_nconcat(char *s1, char *s2, unsigned int n);
char *nulls1(char *a, char *b, unsigned int x);
char *nulls2(char *a, char *b);
char *nonull(char *a, char *b, char *c);
char *nonull_n(char *a, char *b, char *c, unsigned int x);
/**
 * str_nconcat - Entry point
 * Description: 'concatenating two strings'
 *
 * @s1: char input 1
 * @s2: char input 2
 * @n: int input
 * Return: a char
 */
char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	if (s1 == NULL && s2 != NULL)
	{
		if (n >= strlen(s2))
		{
			s = malloc((sizeof(char) * strlen(s2)) + 1);
			if (s == NULL)
				return (NULL);
			s = nulls1(s, s2, strlen(s2));
		}
		else
		{
			s = malloc((sizeof(char) * n) + 1);
			if (s == NULL)
				return (NULL);
			s = nulls1(s, s2, n);
		}
	}
	else if (s1 != NULL && s2 == NULL)
	{
		s = malloc((sizeof(char) * strlen(s1)) + 1);
		if (s == NULL)
			return (NULL);
		s = nulls2(s, s1);
	}

	else if (s1 == NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * 1);
		if (s == NULL)
			return (NULL);
		s[0] = '\0';
	}
	else
	{
		if (n >= strlen(s2))
		{
			s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
			if (s == NULL)
				return (NULL);
			s = nonull(s, s1, s2);
		}
		else
		{
			s = malloc(sizeof(char) * (strlen(s1) + n + 1));
			if (s == NULL)
				return (NULL);
			s = nonull_n(s, s1, s2, n);
		}
	}

	return (s);
	free(s);
}
/**
 * nulls1 - Entry point
 * Description: 'if s1 is null'
 *
 * @a: char input 1
 * @b: char input 2
 * @x: int input
 * Return: a char
 */
char *nulls1(char *a, char *b, unsigned int x)
{
	int i, j;

	j = x;

	for (i = 0; i < j; i++)
	{
		a[i] = b[i];
	}
	a[i] = '\0';
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
/**
 * nonull_n - Entry point
 * Description: 'if no null'
 *
 * @a: char input 1
 * @b: char input 2
 * @c: char input 3
 * @x: int input
 * Return: a char
 */
char *nonull_n(char *a, char *b, char *c, unsigned int x)
{
	int k, h, m;

	m = x;

	for (k = 0; b[k] != '\0'; k++)
	{
		a[k] = b[k];
	}
	for (h = 0; h < m; h++)
	{
		a[k + h] = c[h];
	}
	a[k + h] = '\0';
	return (a);
}
