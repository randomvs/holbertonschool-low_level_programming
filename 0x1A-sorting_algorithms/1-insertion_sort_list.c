#include "sort.h"

/**
 * swap - swaps adjacent values of a doubly linked list in reverse until sorted
 * @list: double pointer to doubly linked list
 * @index: pointer to index to swap
 * Return: pointer to next element in list
 */
listint_t *swap(listint_t **list, listint_t *index)
{
	listint_t *second, *next;

	next = index->next;
	second = index->next;

	while (index != NULL && index->n > second->n)
	{
		second = index->next;
		index->next = second->next;

		if (index->next != NULL)
			index->next->prev = index;

		second->prev = index->prev;

		if (second->prev != NULL)
			second->prev->next = second;

		second->next = index;
		index->prev = second;
		index = second->prev;

		while ((*list)->prev != NULL)
			*list = (*list)->prev;
		print_list(*list);
	}
	return (next);
}

/**
 * insertion_sort_list - performs insertion sort on doubly linked list
 * @list: double pointer to doubly linked list
 * Return: pointer to next element in list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *mule;

	if (list == NULL || *list == NULL)
		return;

	mule = *list;
	while (mule != NULL && mule->next != NULL)
	{
		if (mule->n > mule->next->n)
			mule = swap(list, mule);
		else
			mule = mule->next;
	}
}
