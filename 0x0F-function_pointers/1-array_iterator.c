#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Entry point
 * Description: 'function given as parameter'
 *
 * @array: int input
 * @size: size_t input
 * @action: function input
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
