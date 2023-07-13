#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	printf("Test 1\n-----------------------------------\n");
	concat = string_nconcat("Best ", "School !!!", 5);
	printf("%s\n\n", concat);
	free(concat);
	printf("Test 2\n-----------------------------------\n");
	concat = string_nconcat("Best ", "School !!!", 20);
	printf("%s\n\n", concat);
	free(concat);
	printf("Test 3\n-----------------------------------\n");
	concat = string_nconcat("Best ", "School !!!", 0);
	printf("%s\n\n", concat);
	free(concat);
	return (0);
}
