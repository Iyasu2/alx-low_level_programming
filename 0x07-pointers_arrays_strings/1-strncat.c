#include "main.h"
/**
 * _strncat - Entry point
 * Description: 'concatenating two strings'
 * Parameters: two char and 1 int input returns a char
 * @dest: char input 1
 * @src: char input 2
 * @n: int input
 * Return: char that is the concatenation of the two inputs
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char *final;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	final = dest;

	return (final);
}
