#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to the head node of a listint_t list.
 *
 * Return: number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	int no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++no_of_nodes;
	}
	return (no_of_nodes);
}
