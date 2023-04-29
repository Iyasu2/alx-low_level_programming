#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint2 - Entry point
 * Description: 'free linked lists'
 *
 * @head: listint_t input
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	node = *head;
	if (node == NULL)
		return;

	free_listint2(&(node->next));
	free(node);
	node = NULL;
}
