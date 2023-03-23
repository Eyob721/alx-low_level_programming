#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, fmt_len = 0, match = 1;
	char *str;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format[i++] != '\0')
		fmt_len++;
	i = 0;
	while (i < fmt_len)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		default:
			match = 0;
		}
		if (i++ < fmt_len - 1 && match == 1)
			printf(", ");
		match = 1;
	}
	printf("\n");
	va_end(args);
}
