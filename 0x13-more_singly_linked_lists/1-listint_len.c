#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of a listint_t list.
 *
 * Return: length of a listint_t list (i.e. number of nodes in the list).
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}
	return (len);
}
