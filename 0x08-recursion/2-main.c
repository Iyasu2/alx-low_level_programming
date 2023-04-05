#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello my name is Iyasu Asnake";
	char *f;

	f = _strchr(s, 'K');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
