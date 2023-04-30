#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_nodeint_at_index - Entry point
 * Description: 'return nth node of list'
 *
 * @head: listint_t input
 * @index: unsigned int input
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
