#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *sht;

	sht = shash_table_create(16);

	printf("===========================================\n");
	printf("Adding Nodes\n");
	printf("===========================================\n");
	printf("Add j\n");
	shash_table_set(sht, "j", "1");
	shash_table_print(sht);

	printf("Add w\n");
	shash_table_set(sht, "w", "0");
	shash_table_print(sht);

	printf("Add z\n");
	shash_table_set(sht, "z", "2");
	shash_table_print(sht);

	printf("Add c\n");
	shash_table_set(sht, "c", "2");
	shash_table_print(sht);

	printf("Add y\n");
	shash_table_set(sht, "y", "2");
	shash_table_print(sht);

	printf("Add n\n");
	shash_table_set(sht, "n", "2");
	shash_table_print(sht);

	printf("Add a\n");
	shash_table_set(sht, "a", "2");
	shash_table_print(sht);

	printf("===========================================\n");
	printf("Built Hash Table\n");
	printf("===========================================\n");
	print_sorted_hash_table(sht);

	printf("===========================================\n");
	printf("Sorted List\n");
	printf("===========================================\n");
	shash_table_print(sht);

	printf("===========================================\n");
	printf("Sorted List in Reverse\n");
	printf("===========================================\n");
	shash_table_print_rev(sht);

	shash_table_delete(sht);

	return (EXIT_SUCCESS);
}
