#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: a double pointer to the linked list
 *
 * Return: a pointer to the reversed linked list, or NULL if it fails
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *reverse;

	if (head == NULL)
		return (NULL);
	current = *head;
	while (current != NULL)
	{
		reverse = current;
		current = current->next;
		if (reverse == *head)
			reverse->next = NULL;
		else
			reverse->next = *head;
		*head = reverse;
	}
	return (reverse);
}
