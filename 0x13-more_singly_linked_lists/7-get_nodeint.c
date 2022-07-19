#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list.
 * @head: address of the first node
 * @index: nth node index of the listint_t list
 *
 * Return: if the node does not exist, return NULL
 *	else returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;
	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
