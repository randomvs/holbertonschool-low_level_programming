#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buddy;

	if (head == NULL)
		return;

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		buddy = head->next;
		free(head);
		head = buddy;
	}
}
