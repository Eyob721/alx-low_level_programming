#include "main.h"

/**
 * reverse_array - reverses a given array
 * @a: pointer to the array
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	if (n > 0)
		for (i = 0, j = n - 1; i < n / 2; i++, j--)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
}
