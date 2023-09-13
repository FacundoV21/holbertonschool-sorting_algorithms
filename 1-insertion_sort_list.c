#include "sort.h"

/**
 * move_numbers - swap two nodes
 * @temp: pointer to a node
 * @prev: pointer to the previous node
 */
void move_numbers(listint_t *temp, listint_t *prev)
{
	if (prev)
		prev->next = temp->next;

	if (temp->next)
		temp->next->prev = prev;

	if (prev && prev->prev)
		prev->prev->next = temp;

	if (temp->prev)
		temp->prev = prev->prev;

	prev->prev = temp;
	temp->next = prev;
}

/**
 * insertion_sort_list - sorts a list using insertion method
 * @list: pointer to the head of the list to be ordered
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (!list || !*list)
		return;

	temp = (*list)->next;
	if (!temp)
		return;

	while (temp)
	{
		while (temp->prev && (temp->n < temp->prev->n))
		{
			move_numbers(temp, temp->prev);
			if (!temp->prev)
				*list = temp;
			print_list(*list);
		}
		temp = temp->next;
	}
}
