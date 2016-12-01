#include "lists.h"
#include <stddef.h>

/**
 * free_listint - free a listint_t list
 * @head: address of head of linked list
 * Return: nothing
 **/
void free_listint(listint_t *head)
{
	listint_t *friend;

	while (head != NULL)
	{
		friend = head->next;
		free(head);
		head = friend;
	}
}
