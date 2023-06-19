#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sum_dlistint - Entry point
 * Description: 'sum of all the data in a list'
 *
 * @head: dlistint_t input
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
