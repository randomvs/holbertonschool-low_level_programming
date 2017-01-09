#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - Print all elements of a dlistint_t linked list
 * @h: pointer to dlistint_t linked list
 * Return: number of nodes in linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
