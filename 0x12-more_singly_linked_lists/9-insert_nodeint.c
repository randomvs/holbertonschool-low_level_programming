#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: pointer to head of list
 * @index: index of new node
 * @n: value for data element
 * Return: address of new node, NULL if fails
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *prior, *next, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	next = *head;
	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (NULL);
		prior = next;
		next = next->next;

	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = next;
	prior->next = new;
	return (new);
}
