#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: pointer to head of list
 * @index: index of new node
 * @n: value for data element
 * Return: address of new node, NULL if fails
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *prior, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	new->next = (*head)->next;
	prior = *head;
	for (i = 1; i < index; i++)
	{

		prior = prior->next;
		if (prior == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = prior->next;

		if (new->next == NULL && i != index - 1)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = prior->next;
	prior->next = new;
	return (new);
}
