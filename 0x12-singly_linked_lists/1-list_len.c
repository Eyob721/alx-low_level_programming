#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a list_t list.
 * @h: pointer to the head node of a list_t list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		++no_of_nodes;
		h = h->next;
	}
	return (no_of_nodes);
}
