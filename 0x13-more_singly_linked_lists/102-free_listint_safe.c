#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely, even those with a loop
 * @h: double pointer to the head of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	int freed_size = 0;
	listint_t *slow, *fast, *prev;

	if (h == NULL || *h == NULL)
		return (0);
	/* Check if the list has a loop */
	slow = fast = *h;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;
		if (slow == fast)
			break;
	}
	/* If there is a loop, break it */
	if (!(fast == NULL || fast->next == NULL))
	{
		slow = *h;
		while (slow != fast)
		{
			prev = fast;
			slow = slow->next;
			fast = fast->next;
		}
		prev->next = NULL;
	}
	/* Now free the list */
	while (*h != NULL)
	{
		prev = *h;
		*h = (*h)->next;
		free(prev);
		++freed_size;
	}
	return (freed_size);
}
