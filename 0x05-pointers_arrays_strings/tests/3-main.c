#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";

	printf("Test 1: normal string\n");
	printf("---------------------------------------------------------------\n");
	printf("[GOT]\n");
	_puts(str);
	printf("[EXP]\n");
	puts(str);

	printf("Test 2: NULL\n");
	printf("---------------------------------------------------------------\n");
	printf("[GOT]\n");
	_puts(NULL);
	/* printf("[EXP]\n"); */
	/* puts(NULL); */

	return (0);
}

