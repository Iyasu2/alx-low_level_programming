#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'multiplies two numbers'
 * Parameters: int and a char input returns an int
 * @argc: number of arguments
 * @argv: array storing the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
