#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A pointer to the head of the list_t list
 * @str: String to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	/* get str lenth*/
	for (len = 0; str[len];)
		len++;

	/*assign values to members of the new*/
	new->str = dup;
	new->len = len;
	new->next = *head;
	/*make new the first node*/
	*head = new;

	return (new);
}
