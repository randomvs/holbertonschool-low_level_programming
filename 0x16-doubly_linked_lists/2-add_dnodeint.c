#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add node to beginning of doubly linked list
 * @head: double pointer to head of list
 * @n: value to assign to new node
 * Return: pointer to new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while ((*head)->prev != NULL)
	{
		*head = (*head)->prev;
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (*head);
}
