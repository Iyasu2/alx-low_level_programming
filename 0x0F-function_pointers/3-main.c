#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* main - entry point
* Description: 'get input'
*
* @argc: int input
* @argv: char input
* Return: an int
*/
int main(int argc, char *argv[])
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' && '-' && '*' && '/' && '%') || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}
