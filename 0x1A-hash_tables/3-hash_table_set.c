#include <string.h>

#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key string
 * @value: value string
 *
 * Return: 1 if it succeeded, 0 otherwise.
 * Description: `key` can not be empty, but `value` can be empty
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int key_idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	if (ht->array == NULL || ht->size == 0) /* Incase there is no hash table */
		return (0);
	key_idx = key_index((const unsigned char *)key, ht->size);
	node = search_list_key(ht->array[key_idx], key);
	/* If the key already exists, update the value */
	if (node != NULL)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	/* If the key doesn't exist, build the node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[key_idx];
	ht->array[key_idx] = node;
	return (1);
}

/**
 * search_list_key - searches for a key from a list of hash nodes
 * @node_head: pointer to the hash node head in the hash table
 * @key: key to search for
 *
 * Return: pointer to the hash node if `key` is found, otherwise NULL.
 * Description: The function does not search the whole hash table, but only in
 *              the list of nodes at a particular index of the hash table.
 */
hash_node_t *search_list_key(hash_node_t *node_head, const char *key)
{
	while (node_head != NULL)
	{
		if (strcmp(node_head->key, key) == 0)
			return (node_head);
		node_head = node_head->next;
	}
	return (NULL);
}
