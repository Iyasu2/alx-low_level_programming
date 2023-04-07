#include <stdio.h>

/**
 * main - Entry point
 * Description: 'printing the file's name'
 * Parameters: int and a char input returns an int
 * @argc: number of arguments
 * @argv: array storing the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		return (1);
	}
	printf("%s\n", argv[0]);
	return (0);
}
