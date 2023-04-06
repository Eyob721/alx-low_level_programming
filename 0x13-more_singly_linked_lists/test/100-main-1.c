#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	head = reverse_listint(&head);
	printf( "%s\n", head == NULL ? "Ok!" : "Failed!");
	return (0);
}
