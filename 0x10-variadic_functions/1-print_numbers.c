#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
	{
		va_end(ptr);
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ptr, int), separator);
	printf("%d\n", va_arg(ptr, int));

	va_end(ptr);
}
