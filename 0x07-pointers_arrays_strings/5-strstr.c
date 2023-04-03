#include "main.h"
/**
 * _strstr - Entry point
 * Description: 'first occurence of a substring'
 * Parameters: two char inputs returns a char
 * @haystack: char input 1
 * @needle: char input 2
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] != needle[j])
				{
					break;
				}
			}
			if (needle[j] != '\0')
			{
				haystack = haystack + i;
				return (haystack);
			}
		}
	}
	return (NULL);
}
