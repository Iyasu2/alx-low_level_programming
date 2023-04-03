#include "main.h"
/**
 * print_chessboard - Entry point
 * Description: 'print a chessboard'
 * Parameters: 2d char input no return
 * @s: char input 1
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; *a != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((*a)[j]);
			if (j == 7)
				_putchar(' ');
		}
		a++;
	}
}
