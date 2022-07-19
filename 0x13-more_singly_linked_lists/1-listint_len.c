#include "lists.h"

/**
 * listint_len - a function that counts the elements of a listint_t list.
 * @h: elements of the listint_t list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (1);

	while (h) /*also while (h != NULL)*/
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
