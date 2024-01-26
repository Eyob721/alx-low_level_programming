#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer ot the head of the list
 * @index: index of the node to get
 *
 * Return: pointer to node at given index, or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
		head = head->next, ++i;
	return (head);
}
