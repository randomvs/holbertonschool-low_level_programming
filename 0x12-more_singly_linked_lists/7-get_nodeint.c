#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * get_nodeint_at_index - return address of nth node
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: address of node, NULL if failed
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	next = head;

	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (NULL);
		next = next->next;
	}
	return (next);
}
