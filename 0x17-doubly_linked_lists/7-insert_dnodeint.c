#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: given index
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if faliure occurs or if index is
 *         out of range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *prev = NULL, *cur;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	cur = *h;
	while (cur != NULL && i < idx)
	{
		prev = cur;
		cur = cur->next;
		++i;
	}
	if (idx > i)
		return (NULL);
	if (cur == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev;
	new_node->next = cur;

	prev->next = cur->prev = new_node;
	return (new_node);
}
