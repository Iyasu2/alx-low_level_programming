#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pop_listint - Entry point
 * Description: 'delete head of a linked lists'
 *
 * @head: listint_t input
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return (i);
}
