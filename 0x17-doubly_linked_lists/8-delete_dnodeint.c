#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * delete_dnodeint_at_index - Entry point
 * Description: 'delete node at a given position of linked list'
 *
 * @head: dlistint_t input
 * @idx: unsigned int input
 * Return: 1 if success -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	unsigned int i;
	dlistint_t *last_node = *head;
	dlistint_t *previous_node = NULL;

	if (*head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(last_node);
		return (1);
	}
	for (i = 0; i < idx && last_node != NULL; i++)
	{
		previous_node = last_node;
		last_node = last_node->next;
	}
	if (last_node == NULL)
		return (-1);
	previous_node->next = last_node->next;
	if (last_node->next != NULL)
		(last_node->next)->prev = previous_node;
	free(last_node);

	return (1);
}
