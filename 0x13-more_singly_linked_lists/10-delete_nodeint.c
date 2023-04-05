#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the
 *							node at index of a listint_t linked list
 * @head: a double pointer to the head of the linked list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if successful, ot -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous, *current;

	if (head == NULL)
		return (-1);
	previous = current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (current == *head)
		*head = current->next;
	else
		previous->next = current->next;
	free(current);
	return (1);
}
