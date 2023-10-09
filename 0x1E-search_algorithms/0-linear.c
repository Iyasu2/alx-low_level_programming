#include "search_algos.h"
/**
 * linear_search - Entry point
 * Description: 'linear search'
 *
 * @array: array of integers
 * @size: size of array
 * @value: value to be found
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", (unsigned long)i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
