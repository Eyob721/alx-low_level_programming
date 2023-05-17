#include "lists.h"

/**
 * find_listint_loop - a function that finds a loop in a listint_t linked list
 * @head: a pointer to the head of the list
 *
 * Return: pointer to the start of the loop, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;
	int has_loop = 0;

	if (!head)
		return (NULL);
	slow = fast = head;
	while (fast && fast->next && !has_loop)
	{
		slow = slow->next;
		fast = fast->next->next;
		has_loop = slow == fast;
	}
	if (!has_loop)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
