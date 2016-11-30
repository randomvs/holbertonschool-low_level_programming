#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * sum_listint - sums all the data in a listint_t list
 * @head: pointer to head of list
 * Return: sum of all n values
 **/
int sum_listint(listint_t *head)
{
	int data;

	data = 0;
	while (head != NULL)
	{
		data += head->n;
		head = head->next;
	}
	return (data);
}
