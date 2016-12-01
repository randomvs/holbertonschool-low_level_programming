#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: pointer to head of list
 * @index: index of node
 * Return: 1 if succeeds, -1 if failed
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prior, *next;
	int i;

	if (head == NULL) //is pointer to pointer valid
		return (-1);

	next = *head;
	for (i = 0; i < index; i++)
	{
		prior = next;
		next = next->next;
	}
	prior->next = next->next;
	free(next);
	return (1);
}
