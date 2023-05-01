#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Entry point
 * Description: 'printing all elements of list safely'
 *
 * @head: list_t input
 * Return: size_t number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}

	return (nodes);
}
