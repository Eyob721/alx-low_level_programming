#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: head of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev->str);
		free(prev);
	}
}
