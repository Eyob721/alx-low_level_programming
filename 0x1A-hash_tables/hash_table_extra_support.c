#include "hash_tables.h"

/**
 * print_hash_table - Prints the hash table and nods
 * @ht: Pointer to the hash table
 *
 * Return: void
 */
void print_hash_table(hash_table_t *ht)
{
	hash_node_t *node_head = NULL, **hash_array = NULL;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	hash_array = ht->array;
	while (i < ht->size)
	{
		printf("%lu:", i);
		node_head = hash_array[i];
		if (node_head == NULL)
			printf(" -> NULL");
		while (node_head != NULL)
		{
			printf(" -> {\'%s\': \'%s\'}", node_head->key, node_head->value);
			node_head = node_head->next;
		}
		printf("\n");
		++i;
	}
}

/**
 * print_sorted_hash_table - Prints the actual hash table of Sorted HT
 * @sht: Pointer to the sorted hash table
 *
 * Return: void
 */
void print_sorted_hash_table(shash_table_t *sht)
{
	shash_node_t *node_head = NULL;
	unsigned long int i = 0;

	if (sht == NULL || sht->array == NULL)
		return;
	while (i < sht->size)
	{
		printf("%lu:", i);
		node_head = sht->array[i];
		if (node_head == NULL)
			printf(" -> NULL");
		while (node_head != NULL)
		{
			printf(" -> {\'%s\': \'%s\'}", node_head->key, node_head->value);
			node_head = node_head->next;
		}
		printf("\n");
		++i;
	}
}
