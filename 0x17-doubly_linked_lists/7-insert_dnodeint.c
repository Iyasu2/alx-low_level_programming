#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * insert_dnodeint_at_index - Entry point
 * Description: 'add node at a given position of linked list'
 *
 * @head: dlistint_t input
 * @n: int input
 * @idx: unsigned int input
 * Return: adress of the new element or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	last_node = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}
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
	new_node->prev = last_node;
	if (last_node->next != NULL)
		(last_node->next)->prev = new_node;
	last_node->next = new_node;

	return (new_node);
}
