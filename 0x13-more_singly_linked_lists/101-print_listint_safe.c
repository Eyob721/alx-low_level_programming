#include "lists.h"

listint_t *find_loop(listint_t *head);
/**
 * print_listint_safe - a function that prints a listint_t linked list safelty,
 *						meaning it can print lists with a loop
 * @head: pointer to the head node of the list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_of_nodes = 0, occurrence = 1;
	listint_t *loop_node, *cur;

	if (head == NULL)
		return (0);
	loop_node = find_loop((listint_t *)head);
	if (loop_node == NULL) /* No loop in the list */
	{
		for (cur = (listint_t *)head; cur != NULL; cur = cur->next)
			printf("[%p] %d\n", (void *)cur, cur->n), ++no_of_nodes;
		return (no_of_nodes);
	}
	/**
	 * In printing the nodes of a list with a loop, go through the list and
	 * print each node, including the loop node, but only on the first
	 * occurrence. On the second occurrence of the loop node exit the loop,
	 * and indicate where the loop node is.
	 */
	cur = (listint_t *)head;
	while (cur != loop_node || occurrence != 2)
	{
		printf("[%p] %d\n", (void *)cur, cur->n), ++no_of_nodes;
		if (cur == loop_node)
			occurrence = 2;
		cur = cur->next;
	}
	printf("-> [%p] %d\n", (void *)cur, cur->n);
	return (no_of_nodes);
}

/**
 * find_loop - a function that finds a loop in listint_t list and
 *			   returns the address of the starting node of the loop
 * @head: pointer to the head of the list
 *
 * Return: address of the starting node of the loop,
 *		   or NULL if there is no loop
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = (listint_t *)head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;
		if (slow == fast)
			break;
	}
	/**
	 * If 'fast' is NULL, or for lists with only one node,
	 * if 'fast->next' is NULL, there is no loop
	 */
	if (fast == NULL || fast->next == NULL)
		return (NULL);
	/* If there is a loop, find the starting point */
	slow = (listint_t *)head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
