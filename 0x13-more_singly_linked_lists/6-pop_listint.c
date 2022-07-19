/*
 * STEPS
 * 1. Take the next item that the head points to and save it
 * 2. Free the head item
 * 3. Set the head to be the next item that we've stored on the side
 */

#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *		of a listint_t linked list,
 *		and returns the head node’s data (n)
 * @head: elements of the listint_t list
 *
 * Return: if the linked list is empty return 0
 *	else return's the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *nextNode;
	int headValue;

	if (*head == NULL)
		return (0);

	nextNode = (*head)->next;
	headValue = (*head)->n;
	free(*head);
	*head = nextNode;

	return (headValue);
}
