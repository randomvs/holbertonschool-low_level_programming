#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * pop_listint - deletes head of node
 * @head: pointer to head of list
 * Return: data of deleted head
 **/
int pop_listint(listint_t **head)
{
	listint_t *next;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (data);
}
