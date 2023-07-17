#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *got, *exp;

	printf("Test 1\n-------------------------------------------------------\n");
	got = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("[GOT]: %s", got);
	exp = strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("[EXP]: %s", exp);

	printf("Test 2\n-------------------------------------------------------\n");
	got = _strcpy(s1, NULL);
	printf("s1: %s\n", s1);
	printf("[GOT]: %s\n", got);

	/*strcpy can not take NULL */
	/* exp = strcpy(s1, NULL); */
	/* printf("%s", exp); */

	printf("Test 2\n-------------------------------------------------------\n");
	got = _strcpy(NULL, NULL);
	printf("[GOT]: %s\n", got);
	/* exp = strcpy(NULL, NULL); */
	/* printf("%s", exp); */

	return (0);
}
