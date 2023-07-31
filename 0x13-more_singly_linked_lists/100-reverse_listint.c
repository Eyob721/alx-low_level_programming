#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head a listint_t list
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *reverse_head = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = reverse_head;
		reverse_head = tmp;
	}
	*head = reverse_head;
	return (reverse_head);
}
