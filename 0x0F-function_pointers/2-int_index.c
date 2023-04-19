#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - Entry point
 * Description: 'searching for an integer'
 *
 * @array: int input
 * @size: int input
 * @cmp: function input
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
