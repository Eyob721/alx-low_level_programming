#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of the given parameters, or 0 if `n` is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i++ < n)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
