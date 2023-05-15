#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - Entry point
 * Description: 'return value of a bit at a given index'
 *
 * @n: unsigned long int input
 * @index: unsigned int input
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (1 & (n >> index));
}
