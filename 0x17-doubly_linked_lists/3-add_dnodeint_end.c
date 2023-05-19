#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *cur = NULL;

	if (!head)
		return (NULL);
	cur = *head;
	while (cur && cur->next) /* Ends at the last node */
		cur = cur->next;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = cur;
	if (*head == NULL) /* Empty list */
		*head = new_node;
	else
		cur->next = new_node;
	return (new_node);
}
