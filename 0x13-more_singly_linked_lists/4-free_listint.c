#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: address of the first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp; /*to hold th current node to be freed*/

	while (head != NULL)
	{
		temp = head;
		head = head->next; /*moves to the next node*/
		free(temp); /*frees the current node*/
	}
}
