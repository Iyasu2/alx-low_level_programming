#include "main.h"
/**
 * more_numbers - Entry point
 * Description: 'printing digits ten times using puts'
 * Parameters: no input no return
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				putchar(j + 48);
			}
			else
			{
				putchar('1');
				putchar((j % 10) + 48);
			}
		}
	putchar('\n');
	}
}
