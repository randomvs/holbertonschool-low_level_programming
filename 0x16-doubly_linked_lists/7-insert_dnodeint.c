#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - insert node in doubly linked list
 * @head: head of doubly linked list
 * @index: position where to insert new node
 * @n: value to add in node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index,
int n)
{
	dlistint_t *prior, *next, *new;
	unsigned int i;

	if (head == NULL || (*head == NULL && index != 0))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
		while ((*head)->prev !=  NULL)
			*head = (*head)->prev;
	if (index == 0)
	{
		new->prev = NULL;
		new->next = *head;
		if (*head != NULL)
			(*head)->prev = new;
		*head = new;
		return (*head);
	}
	prior = *head;
	next = prior->next;
	for (i = 1; i < index; i++)
	{
		prior = prior->next;
		if ((prior == NULL) || (prior->next == NULL && i + 1 != index))
		{
			free(new);
			return (NULL);
		}
		next = prior->next;
	}
	prior->next = new;
	new->prev = prior;
	new->next = next;
	if (next != NULL)
		next->prev = new;
	return (new);
}
