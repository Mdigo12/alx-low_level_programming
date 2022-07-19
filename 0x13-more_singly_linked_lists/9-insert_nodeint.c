#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node to a specific index
 * @head: address of the first node
 * @idx: index to insert the node
 * @n: an integer data
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head, *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++) /*move to just idx-1 index node*/
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	current = temp->next;
	temp->next = new;
	new->next = current;
	return (new);

}
