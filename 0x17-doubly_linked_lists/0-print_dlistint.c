#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all the elements
 *			of a dlistint_t list.
 * @h: pointer to the first node of the list
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	/*if (h == NULL)*/
		/*return (0);*/
	/*while (h->prev != NULL)*/
		/*h = h->prev;*/
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
