#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: a double pointer to the head of the list_t list
 * @str: string of the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = _strdup((char *)str);
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *			 memory, which contains a copy of the string given as a parameter
 * @str: a given string
 *
 * Return: pointer to a newly allocated duplicate of the given string, or
 *		   NULL, if the given string is NULL, or if memory allocation failed
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	/* Find length for str, use i to store length */
	for (i = 0; str[i] != '\0'; i++)
		;
	dup = malloc(sizeof(char) * (i + 1)); /* +1 for '\0' character*/
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

/**
 * _strlen - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s != NULL && *(s++) != '\0')
		len++;
	return (len);
}


