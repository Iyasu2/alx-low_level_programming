#include "main.h"
/**
 * _strncpy - Entry point
 * Description: 'replacing part of a string'
 * Parameters: two char and 1 int input returns a char
 * @dest: char input 1
 * @src: char input 2
 * @n: int input
 * Return: char that is the replaced string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	char *final;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[j] = src[j];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	final = dest;

	return (final);
}
