#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * insert_nodeint_at_index - Entry point
 * Description: 'add node at a given position of linked list'
 *
 * @head: list_t input
 * @n: int input
 * @idx: unsigned int input
 * Return: adress of the new element or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	last_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (last_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		last_node = last_node->next;
	}
	new_node->next = last_node->next;
	last_node->next = new_node;

	return (new_node);
}
