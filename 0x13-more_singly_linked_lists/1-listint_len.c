#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked list_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	for (len = 0; h != NULL; h = h->next)
		len++;

	return (len);
}
