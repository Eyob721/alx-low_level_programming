#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(10);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "etairas", "mentioner");
	hash_table_set(ht, "eliotropes", "neurospora");
	hash_table_set(ht, "epravement", "serafins");
	hash_table_set(ht, "tylist", "subgenera");
	hash_table_set(ht, "oyful", "synaphea");
	hash_table_set(ht, "edescribed", "urites");
	hash_table_set(ht, "ram", "vivency");

	printf("---\n");
	print_hash_table(ht);
	printf("---\n");

	hash_table_set(ht, "betty", "super cool");

	printf("---\n");
	print_hash_table(ht);
	printf("---\n");

	return (EXIT_SUCCESS);
}
