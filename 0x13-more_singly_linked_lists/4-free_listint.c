#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to the head of th list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
