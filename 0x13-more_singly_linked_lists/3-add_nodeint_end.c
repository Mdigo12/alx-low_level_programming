#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *		at the end of listint_t list.
 * @head: first node
 * @n: an integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	last = *head;
	if (*head == NULL)
		*head = new;

	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (new);
}
