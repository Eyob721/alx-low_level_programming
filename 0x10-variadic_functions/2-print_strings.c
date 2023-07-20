#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(args);
}
