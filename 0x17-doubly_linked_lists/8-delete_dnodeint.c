#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: double pointer to the head of the list
 * @index: given index
 *
 * Return: 1 on sucess, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *cur;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	prev = NULL;
	cur = *head;
	while (cur != NULL && i < index)
	{
		prev = cur;
		cur = cur->next;
		++i;
	}

	if (cur == NULL || index > i)
		return (-1);

	if (prev != NULL)
		prev->next = cur->next;
	if (cur->next != NULL)
		(cur->next)->prev = prev;
	if (*head == cur)
		*head = cur->next;
	free(cur);

	return (1);
}
