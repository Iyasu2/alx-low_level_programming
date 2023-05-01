#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * reverse_listint - Entry point
 * Description: 'reverse list'
 *
 * @head: listint_t input
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
