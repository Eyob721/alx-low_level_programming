#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the listint_t list
 * @n: data for member 'n' of the new node
 *
 * Return: address of the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

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
	/* Add node at the beginning of the list */
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
