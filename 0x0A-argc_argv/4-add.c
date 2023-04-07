#include <stdio.h>
#include <stdlib.h>

int is_number(char *s);
/**
 * main - Entry point
 * Description: 'adds niumbers'
 * Parameters: int and a char input returns an int
 * @argc: number of arguments
 * @argv: array storing the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc - 1; i++)
	{
		if (is_number(argv[i + 1]) == 1)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 0; i < argc - 1; i++)
	{
		sum += atoi(argv[i + 1]);
	}
	printf("%i\n", sum);
	return (0);
}

/**
 * is_number - Entry point
 * Description: 'checks if input is number'
 * Parameters: char input returns an int
 * @s: char input
 * Return: 0 if number 1 if not
 */
int is_number(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] > 57 || s[j] < 48)
			return (1);
	}
	return (0);
}
