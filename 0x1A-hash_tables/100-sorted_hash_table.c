#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the sorted hash table
 *
 * Return: pointer to the sorted hash table, or NULL if it fails.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);
	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	shash_table->shead = shash_table->stail = NULL;
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	/* Intialize shash table array */
	while (i < size)
		shash_table->array[i++] = NULL;
	return (shash_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @sht: pointer to the sorted hash table
 * @key: key string
 * @value: value string
 *
 * Return: 1 if it succeeded, 0 otherwise.
 * Description: `key` can not be empty, but `value` can be empty
 */
int shash_table_set(shash_table_t *sht, const char *key, const char *value)
{
	shash_node_t *node = NULL;
	unsigned long int key_idx;

	if (sht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	if (sht->array == NULL || sht->size == 0) /* Hash table doesn't exist */
		return (0);
	node = search_sorted_list_key(sht->shead, key);
	if (node != NULL) /* If the key already exists, update the value */
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	key_idx = key_index((const unsigned char *)key, sht->size);
	node = malloc(sizeof(shash_node_t));
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
	node->next = sht->array[key_idx];
	sht->array[key_idx] = node;
	add_to_sorted_list(&sht->shead, &sht->stail, node);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @sht: pointer to the sorted hash table
 * @key: key string
 *
 * Return: value string it the key is found, otherwise NULL.
 */
char *shash_table_get(const shash_table_t *sht, const char *key)
{
	shash_node_t *node = NULL;

	if (sht == NULL || key == NULL || *key == '\0')
		return (NULL);
	if (sht->array == NULL || sht->size == 0) /* Hash table doesn't exist */
		return (NULL);
	node = search_sorted_list_key(sht->shead, key);
	if (node != NULL)
		return (node->value);
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table.
 * @sht: pointer to the sorted hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *sht)
{
	shash_node_t *shead = NULL;
	int node_were_printed = 0;

	if (sht == NULL || sht->array == NULL)
		return;
	shead = sht->shead;
	printf("{");
	while (shead != NULL)
	{
		if (node_were_printed)
			printf(", ");
		printf("\'%s\': \'%s\'", shead->key, shead->value);
		node_were_printed = 1;
		shead = shead->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse.
 * @sht: pointer to the sorted hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *sht)
{
	shash_node_t *stail = NULL;
	int node_were_printed = 0;

	if (sht == NULL || sht->array == NULL)
		return;
	stail = sht->stail;
	printf("{");
	while (stail != NULL)
	{
		if (node_were_printed)
			printf(", ");
		printf("\'%s\': \'%s\'", stail->key, stail->value);
		node_were_printed = 1;
		stail = stail->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @sht: Pointer to the sorted hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *sht)
{
	shash_node_t *node_head = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (sht == NULL || sht->array == NULL)
		return;
	while (i < sht->size)
	{
		node_head = sht->array[i];
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
	free(sht->array);
	free(sht);
}

/* ========================================================================= */
/*                             SUPPORT FUNCTION                              */
/* ========================================================================= */

/**
 * search_sorted_list_key - searches for a key from a list of sorted hash nodes
 * @shead: pointer to the head of the sorted list of keys
 * @key: key to search for
 *
 * Return: pointer to the hash node if `key` is found, otherwise NULL.
 * Description: The function searches the sorted list for the key.
 */
shash_node_t *search_sorted_list_key(shash_node_t *shead, const char *key)
{
	while (shead != NULL)
	{
		if (strcmp(shead->key, key) == 0)
			return (shead);
		shead = shead->snext;
	}
	return (NULL);
}

/**
 * add_to_sorted_list - adds a node to the sorted list of hash nodes
 * @h: double pointer to the head of the sorted list
 * @t: double pointer to the tail of the sorted list
 * @n: node to be inserted
 *
 * Return: void
 */
void add_to_sorted_list(shash_node_t **h, shash_node_t **t, shash_node_t *n)
{
	shash_node_t *next = *h, *tmp = NULL;

	/* Place the node at the beginning */
	n->snext = *h;
	n->sprev = NULL;
	if (*h != NULL)
		(*h)->sprev = n;
	*h = n;
	if (*t == NULL)
		*t = n;
	/* Find the correct position for the new node and put it there */
	next = n->snext;
	while (next != NULL && strcmp(n->key, next->key) >= 0)
	{
		if (n == *h)
			*h = next;
		if (next == *t)
			*t = n;
		tmp = next->snext;
		next->sprev = n->sprev;
		next->snext = n;
		if (next->sprev != NULL)
			(next->sprev)->snext = next;
		n->sprev = next;
		n->snext = tmp;
		if (tmp != NULL)
			tmp->sprev = n;
		next = tmp;
	}
}
