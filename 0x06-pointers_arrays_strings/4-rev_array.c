#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - Entry point
 * Description: 'reversing array of integers'
 * Parameters: two int inputs no return
 * @a: int input 
 * @n: size of input
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;
	int *temp;
	temp = malloc(sizeof(n));

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - i - 1];
	}
	a = temp;
}
