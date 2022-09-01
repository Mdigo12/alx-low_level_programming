#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - a function that returns the number
 *			of elements in a linked dlistint_t list.
 * @h: pointer to the first node of the list
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
