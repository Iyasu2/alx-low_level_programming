#include "main.h"
/**
 * _memcpy - Entry point
 * Description: 'copying a string to another string'
 * Parameters: two char and 1 unsigned int input returns a char
 * @dest: char input 1
 * @src: char input 2
 * @n: unsigned int input
 * Return: modified char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *final;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	final = dest;

	return (final);
}
