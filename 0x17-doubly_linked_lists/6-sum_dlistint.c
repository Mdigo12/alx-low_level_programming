#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: first node address
 *
 * Return: the sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;
	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
