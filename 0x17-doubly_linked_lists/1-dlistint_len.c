#include "lists.h"

/**
 * dlistint_len - finds the number of nodes in a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 *
 * Return: no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	while (h)
	{
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
