#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of a dlistint_t list
 * @idx: index of the new node
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL, *cur = NULL, *prev = NULL;

	if (!h)
		return (NULL);
	cur = *h;
	while (cur && i++ < idx)
	{
		prev = cur;
		cur = cur->next;
	}
	if (!cur && i < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = cur;
	new_node->prev = prev;
	if (cur == *h)
		*h = new_node;
	else if (cur == NULL)
		prev->next = new_node;
	else
	{
		prev->next = new_node;
		cur->prev = new_node;
	}
	return (new_node);
}
