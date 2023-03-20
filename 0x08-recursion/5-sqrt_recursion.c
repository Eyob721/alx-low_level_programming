#include "main.h"

/**
 * find_sqrt - finds the sqrt of a number
 * @n: the given number
 * @ptr: pointer to r
 *
 * Return: void
 */
void find_sqrt(int n, int *ptr)
{
	if ((*ptr) * (*ptr) > n)
		*ptr = -1;
	else if ((*ptr) * (*ptr) < n)
	{
		(*ptr)++;
		find_sqrt(n, ptr);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a given number
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	int r = 1;

	find_sqrt(n, &r);
	return (r);
}
