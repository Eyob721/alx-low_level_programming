#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: key string
 *
 * Return: value string it the key is found, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int key_idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	if (ht->array == NULL || ht->size == 0) /* Incase there is no hash table */
		return (0);
	key_idx = key_index((const unsigned char *)key, ht->size);
	node = search_list_key(ht->array[key_idx], key);
	if (node != NULL)
		return (node->value);
	return (NULL);
}
