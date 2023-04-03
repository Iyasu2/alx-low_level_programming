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
	unsigned i;
	char *final;

	for (i = 0; i < n && *dest != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	final = dest;

	return (final);
}
