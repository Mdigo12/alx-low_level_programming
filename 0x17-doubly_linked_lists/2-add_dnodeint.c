#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: pointer to the head node of the list
 * @n: value to be added to the new node
 *
 * Return: new node address or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = (*head);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tmp;
	new->prev = NULL;

	if (tmp != NULL)
		tmp->prev = new;
	*head = new;
	return (new);
}
