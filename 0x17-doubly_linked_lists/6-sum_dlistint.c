#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t list
 * @head: pointer to the head of the linked list
 *
 * Return: sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
