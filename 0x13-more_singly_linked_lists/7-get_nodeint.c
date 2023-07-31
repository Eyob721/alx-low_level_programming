#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node
 * @index: index of the node in the list
 *
 * Return: pointer to the node at the given index, or NULL if
 *		   the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i++ < index && head != NULL)
		head = head->next;
	return (head);
}
