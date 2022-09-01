#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: Parameter that point to the head of the
 *		linked list
 * @n: An integer to be addedto the new node
 *
 * Return: the address of the new node,
 * otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/*Assigning members of list_t new values*/
	new->n = n;
	new->next = NULL; /*New is added as a last element*/

	/*let's temporarily hold the head to a node last*/
	last = *head;

	/*If the Linked List is empty, then make the new node as head*/
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/*traverse to the last element whose head is NULL*/
	while (last->next != NULL)
		last = last->next;
	last->next = new;/*Assign member next of the last element to point to new*/
	new->prev = last;

	return (new);
}
