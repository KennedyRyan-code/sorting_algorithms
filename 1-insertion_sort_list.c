#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linkedlist of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: Double pointer to the first element of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;


	for (current = (*list)->next; current != NULL; current = current->next)
	{
		sorted = current;

		while (sorted->prev != NULL && sorted->n < sorted->prev->n)
		{
			temp = sorted->prev;
			sorted->prev = temp->prev;
			temp->next = sorted->next;
			sorted->next = temp;

			if (temp->prev != NULL)
				temp->prev->next = sorted;
			else
				*list = sorted;

			if (temp->next != NULL)
				temp->next->prev = temp;

			print_list(*list);
		}
	}
}
