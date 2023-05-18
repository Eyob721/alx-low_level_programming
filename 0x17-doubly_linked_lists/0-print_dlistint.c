#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: no of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no_of_nodes++;
		h = h->next;
	}
	return (no_of_nodes);
}
