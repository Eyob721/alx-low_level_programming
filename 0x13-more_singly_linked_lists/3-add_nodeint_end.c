#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the listint_t list
 * @n: data for member 'n' of the new node
 *
 * Return: address of the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *last_node;

	/* Return NULL if address of the head is not given */
	if (head == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	/* Handle malloc return */
	if (new_node == NULL)
		return (NULL);

	/* Initialize node data */
	new_node->n = n;
	new_node->next = NULL;

	/* For an empty list, just assign head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* For a non empty list, find the last node first */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* Then link the last node to the new node */
	last_node->next = new_node;
	return (new_node);
}
