#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint_safe - free a listint_t list, including loops
 * @head: address of head of list
 * Return: nothing
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *friend, start;

	if (head == NULL)
		return;
	while (head != NULL && head != start)
	{
		friend = head->next;
		free(head);
		head = friend;
	}
}
