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
	if (*head == NULL)
		return;

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
	head = NULL;
}
