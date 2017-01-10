#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete a node from index in doubly linked list
 * @head: head of doubly linked list
 * @index: position of node to delete
 * Return: 1 if successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prior, *next, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	while ((*head)->prev !=  NULL)
		*head = (*head)->prev;
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		if (next != NULL)
			next->prev = NULL;
		*head = next;
		return (1);
	}
	prior = *head;
	for (i = 0; i < index; i++)
	{
		prior = prior->next;
		if ((prior == NULL) || (prior->next == NULL && i + 1 != index))
			return (-1);
	}
	next = prior->next;
	temp = prior->prev;
	free(prior);
	temp->next = next;
	if (next != NULL)
		next->prev = temp;
	return (1);
}
