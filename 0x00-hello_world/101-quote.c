#include <stdio.h>
/**
 * write - write function
 * Description: 'printing'
 * Parameters: int filedes, const char *buf and unsigned in nbyte
 * Return: Always 0 (Success)
*/

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * main - Entry point
 * Description: 'printing without printf'
 * Parameters: no input returns an int
 * Return: Always 0 (Success)
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
