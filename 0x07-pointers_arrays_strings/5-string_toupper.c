#include "main.h"
/**
 * string_toupper - Entry point
 * Description: 'capitalizing a string'
 * Parameters: 1 char input char return
 * @s: char input
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
