#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *			and sets head to NULL
 * @head: address of the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp; /*to hold th current node to be freed*/

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next; /*moves to the next node*/
		free(*head); /*frees the current node*/
		*head = temp; /*assign head to point the next node*/
	}

	*head = NULL;
}
