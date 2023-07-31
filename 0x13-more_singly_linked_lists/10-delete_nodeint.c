#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: double pointer the head of the list
 * @idx: index of the list where the new node should be added
 *
 * Return: address of the new node, or NULL if failure occurs
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *prev, *cur;

	if (head == NULL)
		return (-1);
	/* Find the node at 'idx', meaning current node 'cur' */
	prev = cur = *head;
	while (i++ < idx && cur != NULL)
	{
		prev = cur;
		cur = cur->next;
	}
	/* If we are currently at NULL, then 'idx' is out of range */
	if (cur == NULL)
		return (-1);
	/* Link the previous node to the node after the current node */
	if (cur == *head)
		*head = cur->next;
	else
		prev->next = cur->next;
	/* Now delete the current node */
	free(cur);
	return (1);
}
