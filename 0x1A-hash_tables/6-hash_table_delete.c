#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Pointer to the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node_head = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		node_head = ht->array[i];
		while (node_head != NULL)
		{
			tmp = node_head;
			node_head = node_head->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		++i;
	}
	free(ht->array);
	free(ht);
}
