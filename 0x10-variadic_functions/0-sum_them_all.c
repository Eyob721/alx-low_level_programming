#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters, 0 (on errors)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		total += va_arg(ptr, int);

	va_end(ptr);

	return (total);
}
