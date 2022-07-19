#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node to a specific index
 * @head: address of the first node
 * @index: index of the node to delete
 *
 * Return: address of the new node, or NULL if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *current;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index != 0)
	{
		for (i = 0; i < index - 1; i++) /*move to just index-1 index node*/
		{
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
		}
		current = temp->next->next;
		free(temp->next);
		temp->next = current;
		return (1);
	}
	else
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

}
