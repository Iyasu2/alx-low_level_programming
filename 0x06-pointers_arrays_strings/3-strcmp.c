#include "main.h"
/**
 * _strcmp - Entry point
 * Description: 'comparing strings'
 * Parameters: two char and an int return
 * @s1: char input 1
 * @s2: char input 2
 * Return: 0 for success
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int n = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				n = 15;
			}
			else
			{
				n = -15;
			}
			break;
		}
	}
	return (n);
}
