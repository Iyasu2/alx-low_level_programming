#include "main.h"
/**
 * rev_string - Entry point
 * Description: 'printing string in reverse'
 * Parameters: char input no return
 * @s: char input
 * Return: no return
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end)
	{
		end++;
	}
	end--;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
