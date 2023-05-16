#include <stdio.h>

/**
 *  * main - prints the environment
 *   *
 *    * Return: Always 0.
 *     */
int main(int ac, char **av, char **env)
{
	printf("%p\n", *env);
	return (0);
}
