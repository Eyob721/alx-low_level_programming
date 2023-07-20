#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 * @separator: the string to be printed between the numbers
 * @n: number of intgers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(args);
}
