#include "lists.h"
#include <stdio.h>
/**
 * print_list - Entry point
 * Description: 'printing all elements of list'
 *
 * @h: list_t input
 * Return: size_t number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}

	return (nodes);
}
