#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
