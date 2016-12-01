#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint2 - free a listint_t list, sets head to NULL
 * @head: address of head of list
 * Return: nothing
 **/
void free_listint2(listint_t **head)
{
	listint_t *friend;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		friend = (*head)->next;
		free(*head);
		(*head) = friend;
	}
}
