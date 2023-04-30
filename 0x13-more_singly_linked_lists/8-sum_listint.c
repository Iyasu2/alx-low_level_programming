#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sum_listint - Entry point
 * Description: 'sum of all the data in a list'
 *
 * @head: listint_t input
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp;

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
