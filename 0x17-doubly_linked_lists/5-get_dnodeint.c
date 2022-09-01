#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list.
 * @head: address of the first node
 * @index: nth node index of the dlistint_t list
 *
 * Return: if the node does not exist, return NULL
 *	else returns the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index > 0 && head != NULL)
		return (get_dnodeint_at_index(head->next, index - 1));
	return (head ? head : NULL);
}
