#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Entry point
 * Description: 'returning elements in a linked list'
 *
 * @h: listint_t input
 * Return: size_t number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{

		h = h->next;
		nodes++;
	}

	return (nodes);
}
