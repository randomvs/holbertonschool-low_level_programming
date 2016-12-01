#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint_safe -
 * @h: listint_t pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *start;
	size_t i;

	start = head;
	if (h == NULL)
		return (0);

	for (i = 0; h != NULL && h != start; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
