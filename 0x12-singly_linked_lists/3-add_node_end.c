#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 * @head: Parameter that point to the head of the
 * linked list list_t
 * @str: Parameter with the string to be duplicated
 *
 * Return: the address of the new element,
 * otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	/*Assigning members of list_t new values*/
	new->str = dup;
	new->len = strlen(str);
	new->next = NULL; /*New is added as a last element*/

	/*let's temporarily hold the head to a node last*/
	last = *head;

	/*If the Linked List is empty, then make the new node as head*/
	if (last == NULL)
		last = new;
	else
	{
		/*traverse to the last element whose head is NULL*/
		while (last->next != NULL)
			last = last->next;
		last->next = new;/*Assign member next of the last element to point to new*/
	}

	return (*head);
}
