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
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||  s[i - 1] == ',' ||  s[i - 1] == ';' ||
				s[i - 1] == '.' ||  s[i - 1] == '!' ||  s[i - 1] == '?' ||
				s[i - 1] == '"' ||  s[i - 1] == '(' ||  s[i - 1] == ')' ||
				s[i - 1] == '{' || s[i - 1] == '}')
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
