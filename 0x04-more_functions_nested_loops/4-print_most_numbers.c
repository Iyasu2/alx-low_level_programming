#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: 'printing digits except 2 and 4 using putchar'
 * Parameters: no input no return
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		putchar(i + 48);
	}
	putchar('\n');
}
