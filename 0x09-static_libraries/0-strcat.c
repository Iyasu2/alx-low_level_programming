#include <stdio.h>
#include "main.h"
/**
 * _strcat - Entry point
 * Description: 'concatenating two strings'
 * Parameters: two char inputs returns a char
 * @dest: char input 1
 * @src: char input 2
 * Return: char that is the concatenation of the two inputs
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *final;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	final = dest;

	return (final);
}
