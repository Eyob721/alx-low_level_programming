#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur = NULL, *prev = NULL;

	if (!head)
		return (-1);
	cur = *head;
	while (cur && i++ < index)
	{
		prev = cur;
		cur = cur->next;
	}
	if (!cur) /* Nothing to delete */
		return (-1);
	if (cur == *head)
		*head = cur->next;
	else
		prev->next = cur->next;
	if (cur->next)
		(cur->next)->prev = prev;
	free(cur);
	return (1);
}
