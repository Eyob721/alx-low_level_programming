#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		no_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (no_of_nodes);
}
