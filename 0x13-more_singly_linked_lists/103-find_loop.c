#include "lists.h"

/**
 * find_listint_loop - finds a loop in a listint_t list
 * @head: pointer to the head node of the list
 *
 * Return: address of the start of the node where the loop starts, or NULL if
 *		   there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	/* Check if the list has a loop */
	slow = fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;
		if (slow == fast)
			break;
	}
	/* If there is no loop, return NULL */
	if (fast == NULL)
		return (NULL);
	/* If there is the loop, find the start of the loop */
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	/* Return the address of the node where the loop starts */
	return (fast);
}
