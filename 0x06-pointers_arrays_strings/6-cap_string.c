#include "main.h"
/**
 * cap_string - Entry point
 * Description: 'capitalizing a string'
 * Parameters: 1 char input char return
 * @s: char input
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32)
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
