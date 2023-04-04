#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 *						a listint_t linked list.
 * @head: a pointer to the head of the linked list
 * @index: the index or nth node from the list
 *
 * Return: a pointer to the nth node, or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
