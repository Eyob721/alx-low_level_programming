#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the head node of a list_t list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		++no_of_nodes;
		h = h->next;
	}
	return (no_of_nodes);
}
