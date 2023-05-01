#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint_safe - Entry point
 * Description: 'free linked lists safely'
 *
 * @h: listint_t input
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *tmp;

	while (*h)
	{
		counter++;
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}

	return (counter);
}
