#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 *						safely, avoiding infinite loops
 * @head: a pointer to the head of the linked list
 *
 * Return: number of nodes printed, 98 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_of_nodes = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		no_of_nodes++;
		if (head != NULL && head->next >= head)
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}
	return (no_of_nodes);
}
