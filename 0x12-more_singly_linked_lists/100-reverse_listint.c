#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * reverse_listint - reverses a listing_t list
 * @head: pointer to head of list
 * Return: address of new head, NULL if fails
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prior, *next;

	if (*head == NULL)
		return (NULL);

	prior = *head;
	next = (*head)->next;
	prior->next = NULL;

	while (next != NULL)
	{
		*head = next;
		next = next->next;
		(*head)->next = prior;
		prior = *head;
	}

	return (*head);
}
