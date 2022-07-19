#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: first node address
 *
 * Return: the sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
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
