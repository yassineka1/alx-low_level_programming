#include "lists.h"

/**
 * list_len- Returns the numbers of elements in a linked list
 * @h: The linked list
 * Return: Number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		num_of_elements++;
		h = h->next;
	}

	return (num_of_elements);
}
