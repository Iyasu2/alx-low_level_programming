#include "main.h"
/**
 * _strcpy - Entry point
 * Description: 'copying a string'
 * Parameters: two char inputs char return
 * @dest: char buffer input
 * @src: char input to be copied
 * Return: return the pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
