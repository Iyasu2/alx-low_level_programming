#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * delete_nodeint_at_index - Entry point
 * Description: 'delete node at a given position of linked list'
 *
 * @head: list_t input
 * @index: unsigned int input
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *last_node, *temp;

	temp = NULL;
	if (*head == NULL)
		return (-1);

	last_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(last_node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (last_node == NULL)
		{
			return (-1);
		}
		last_node = last_node->next;
	}
	temp = last_node->next;
	last_node->next = temp->next;
	free(temp);

	return (1);
}
