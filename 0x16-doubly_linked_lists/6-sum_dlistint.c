#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_dlistint - return sum of a dlistint_t list
 * @head: head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum + head->n);
}
