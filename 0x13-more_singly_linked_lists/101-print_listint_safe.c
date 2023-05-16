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
	listint_t *slow, *fast, *ptr;

	if (head == NULL)
		return (0);
	ptr = slow = fast = (listint_t *)head;
	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		no_of_nodes++;
		ptr = slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (!fast || !fast->next) /* No infinite loop */
	{
		while (ptr)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			no_of_nodes++;
			ptr = ptr->next;
		}
		return (no_of_nodes);
	}
	/* Find repeating node */
	for (slow = (listint_t *)head; slow != fast; slow = slow->next)
		fast = fast->next;
	while (ptr != head)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		no_of_nodes++;
		ptr = ptr->next;
		if (ptr == slow)
			break;
	}
	printf("-> [%p] %d\n", (void *)ptr, ptr->n); /* repeat node */
	return (no_of_nodes);
}
