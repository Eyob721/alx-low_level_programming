#include "lists.h"

/**
 * sum_listint - a function that calculates the sum of
 *				all the data(n) of a listint_t linked list
 * @head: a pointer to head of the linked list
 *
 * Return: sum of the data(n) of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
