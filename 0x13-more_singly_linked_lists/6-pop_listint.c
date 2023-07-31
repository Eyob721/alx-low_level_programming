#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t list,
 *				 and returns the head node's data('n')
 * @head: double pointer to the head of the list
 *
 * Return: head node's data, or 0 if it as empty list
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *head_node;

	if (head == NULL || *head == NULL)
		return (0);
	head_node = *head;
	*head = (*head)->next;
	n = head_node->n;
	free(head_node);
	return (n);
}
