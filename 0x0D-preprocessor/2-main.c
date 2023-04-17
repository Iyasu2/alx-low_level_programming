#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing name'
 *
 * @argc: int input
 * @argv: char input
 * Return: none
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
		return (1);
	for (i = 2; argv[0][i] != '\0'; i++)
		printf("%c", argv[0][i]);
	printf("\n");
	return (0);
}
