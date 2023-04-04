#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a double pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	while (head != NULL && *head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
}
