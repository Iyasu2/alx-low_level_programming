#include <stdio.h>

/**
 * main - Entry point
 * Description: 'printing number of arguments'
 * Parameters: int and a char input returns an int
 * @argc: number of arguments
 * @argv: array storing the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0] == NULL)
		return (1);
	printf("%i\n", argc - 1);
	return (0);
}
