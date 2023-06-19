#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_dnodeint_at_index - Entry point
 * Description: 'return nth node of list'
 *
 * @head: dlistint_t input
 * @index: unsigned int input
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = (head)->next;
	}
	return (head);
}
