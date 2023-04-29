#include "lists.h"
#include <stdio.h>
/**
 * list_len - Entry point
 * Description: 'returning elements in a linked list'
 *
 * @h: list_t input
 * Return: size_t number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{

		h = h->next;
		nodes++;
	}

	return (nodes);
}
