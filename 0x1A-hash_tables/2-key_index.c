#include "hash_tables.h"

/**
 * key_index - gives you the index of the key using hash_djb2.
 * @key: key string
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
