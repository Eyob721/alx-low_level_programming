#include "lists.h"

listint_t *find_loop(listint_t *head);
/**
 * free_listint_safe - frees a listint_t list safely, even those with a loop
 * @h: double pointer to the head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	int freed_size = 0, occurrence = 1;
	listint_t *loop_node, *prev, *cur;

	if (h == NULL || *h == NULL)
		return (0);
	/* Check if the list has a loop */
	loop_node = find_loop(*h);
	/* If there is a loop, break it */
	if (loop_node != NULL)
	{
		prev = cur = *h;
		while (cur != loop_node || occurrence < 2)
		{
			if (cur == loop_node)
				++occurrence;
			prev = cur;
			cur = cur->next;
		}
		prev->next = NULL;
	}
	/* Now free the list */
	while (*h != NULL)
	{
		cur = *h;
		*h = (*h)->next;
		free(cur);
		++freed_size;
	}
	return (freed_size);
}
