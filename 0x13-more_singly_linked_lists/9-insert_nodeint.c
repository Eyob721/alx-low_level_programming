#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 *							new node at a given position
 * @head: a double pointer to the head of the linked list
 * @idx: the index of the list where the new node should be added
 * @n: the data(n) of the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *previous, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	previous = current = *head;
	for (i = 0; i < idx && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (i != idx && current == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (current == *head)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current;
		previous->next = new_node;
	}
	return (new_node);
}
