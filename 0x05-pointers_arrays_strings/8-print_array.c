#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of elements from an array of integers
 * @a: a pointer to an array of integers
 * @n: number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 1)
		printf("\n");
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
	}
}

