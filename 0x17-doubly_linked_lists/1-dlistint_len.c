#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Entry point
 * Description: 'printing number of elements of doubly linked list'
 *
 * @h: dlistint_t input
 * Return: size_t number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
