#include "lists.h"

/**
 * add_node - Adds new node at the beginning of a list
 * @head: Head of the list
 * @str: string to be added
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new_l;

	new_l = malloc(sizeof(list_t));

	if (new_l == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
	{
		free(new_l);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_l->str = dup;
	new_l->length = length;
	new_l->next = *head;

	*head = new_l;

	return (new_l);
}
