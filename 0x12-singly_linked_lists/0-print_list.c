#include "lists.h"

/**
 * print_list - a function that prints a singly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
