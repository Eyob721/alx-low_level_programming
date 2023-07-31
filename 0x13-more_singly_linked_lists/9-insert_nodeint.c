#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if failure occurs
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev, *cur, *new_node = NULL;

	if (head == NULL)
		return (NULL);
	/* Find the node at 'idx', meaning current node 'cur' */
	prev = cur = *head;
	while (i++ < idx && cur != NULL)
	{
		prev = cur;
		cur = cur->next;
	}
	/* If 'idx' is greater than 'i', then it is out of range */
	if (idx > i)
		return (NULL);
	/* Now build the new node, and also handle malloc return */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* Insert the new node before 'cur' and after 'prev' */
	new_node->next = cur;
	if (cur == *head)
		*head = new_node;
	else
		prev->next = new_node;
	return (new_node);
}
