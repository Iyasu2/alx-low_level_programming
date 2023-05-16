#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'multiplies 2 numbers'
 *
 * @num1: int input
 * @num2: int input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int *s;
	int i, j;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; j < strlen(argv[i]; j++)
		{
			if (!isdigit(atoi(argv[i][j])))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');														 exit(98);
			}
		}
	}
	s = malloc(sizeof(int) * 2);
	*s = num1 * num2;
	return = 0;
}
