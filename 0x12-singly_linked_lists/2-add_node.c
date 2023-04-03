#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of list_t list.
 * @head: a double pointer to the head of the linked list
 * @str: the string to be duplicated on the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (str != NULL && new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	if (*head == NULL) /* Empty list */
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
