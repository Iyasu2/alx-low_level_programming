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
	while (*haystack)
	{
		char *begin = haystack;

		char *subStr = needle;

		while (*haystack && *subStr && *haystack == *subStr)
		{
			haystack++;
			subStr++;
		}
		if (!*subStr)
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}
