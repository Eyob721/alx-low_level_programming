#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *				of a listint_t linked list
 * @head: a double pointer to the head of the linked list
 *
 * Return: the data (n) of the head node, 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *head_node;

	if (head == NULL || *head == NULL)
		return (0);
	head_node = *head;
	n = head_node->n;
	*head = (*head)->next;
	free(head_node);
	return (n);
}
