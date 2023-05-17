#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 *					safely, avoiding infinite loop
 * @h: a double pointer to the head of the list
 *
 * Return: void
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *prev;
	size_t no_of_nodes = 0;
	int has_loop = 0;

	if (!h || !(*h))
		return (no_of_nodes);
	slow = fast = *h;
	while (fast && fast->next && !has_loop)
	{
		slow = slow->next;
		fast = fast->next->next;
		has_loop = slow == fast;
	}
	for (prev = *h; !has_loop && *h; prev = *h)
	{
		*h = (*h)->next;
		free(prev);
		no_of_nodes++;
	}
	for (slow = *h; has_loop && slow != fast; slow = slow->next)
		fast = fast->next;
	while (has_loop && *h)
	{
		if (*h == slow)
		{
			*h = (*h)->next;
			slow->next = NULL;
			continue;
		}
		prev = *h;
		*h = (*h)->next;
		free(prev);
		no_of_nodes++;
	}
	if (has_loop)
	{
		free(slow);
		no_of_nodes++;
	}
	return (no_of_nodes);
}
