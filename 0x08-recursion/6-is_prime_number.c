#include "main.h"

/**
 * check_if_prime - checks if a number is prime using a counter
 * @n: the given number
 * @i: an integer counter
 * @ptr: pointer to p
 *
 * Return: void
 */
void check_if_prime(int n, int i, int *ptr)
{
	if (n % i == 0)
		*ptr = 0;
	else if (i < n / 2)
		check_if_prime(n, i + 1, ptr);
}

/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: a given number
 *
 * Return: 1 (if n is prime), 0 (otherwise)
 */
int is_prime_number(int n)
{
	int p = 1;

	if (n <= 1)
		p = 0;
	else
		check_if_prime(n, 2, &p);

	return (p);
}
