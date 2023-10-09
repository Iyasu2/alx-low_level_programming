#include "search_algos.h"
/**
 * binary_search - Entry point
 * Description: 'binary search'
 *
 * @array: array of integers
 * @size: size of array
 * @value: value to be found
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t j;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			if (j != high)
				printf("%i, ", array[j]);
		}
		printf("%i\n", array[j - 1]);

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] > value)
		{
			high = mid - 1;
		}

		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
