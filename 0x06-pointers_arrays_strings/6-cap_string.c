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
		if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
			s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
			s[i] == 33 || s[i] == 34 || s[i] == 63 || s[i] == 40 ||
			s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
