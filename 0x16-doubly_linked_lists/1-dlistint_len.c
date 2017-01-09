#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - return number of nodes in a dlistint_t list
 * @h: pointer to dlsitint_t doubly linked list
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
