#include "main.h"
#include <ctype.h>
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
		if (i == 0 || s[i] == ' ' || s[i] == ',' || s[i] == '\t' ||
			s[i] == '\n' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] != '\0')
				s[i + 1] = toupper(s[i + 1]);
		}
	}
	return (s);
}
