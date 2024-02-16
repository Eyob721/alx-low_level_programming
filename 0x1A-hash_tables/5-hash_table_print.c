#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_head = NULL;
	unsigned long int i = 0;
	int node_were_printed = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node_head = ht->array[i];
		while (node_head != NULL)
		{
			if (node_were_printed)
				printf(", ");
			printf("\'%s\': \'%s\'", node_head->key, node_head->value);
			node_were_printed = 1;
			node_head = node_head->next;
		}
		++i;
	}
	printf("}\n");
}
