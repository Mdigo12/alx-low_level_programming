#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to first node if the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
