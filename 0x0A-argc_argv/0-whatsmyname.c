#include <stdio.h>

/**
 * main - Entry point
 * Description: 'printing alphabets'
 * Parameters: no input returns an int
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
