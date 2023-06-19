#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Entry point
 * Description: 'printing all elements of doubly linked list'
 *
 * @h: dlistint_t input
 * Return: size_t number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
