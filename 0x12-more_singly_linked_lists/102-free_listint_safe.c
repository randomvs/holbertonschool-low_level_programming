#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint_safe - free a listint_t list, including loops
 * @head: address of head of list
 * Return: size of list freed
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *friend, start;
	size_t i;

	start = head;
	for (i = 0; head != NULL && head != start; i++)
	{
		friend = head->next;
		free(head);
		head = friend;
	}
	return (i);
}
