#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - a function that prints anything
 * @format: a string which contains list of types of arguments passed to the
 *			function
 *
 * Return: void
 * Description: The list of types of arguments are interpreted as follows:
 *			- c: char
 *			- i: integer
 *			- f: float
 *			- s: char *
 *			- any other characters are ignored
 */
void print_all(const char * const format, ...)
{
	int i = 0, is_valid_type;
	va_list args;
	char *str;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		is_valid_type = 1;
		switch (format[i])
		{
		case 'c':
			putchar(va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			is_valid_type = 0;
		}
		i++;
		if (is_valid_type && format[i] != '\0')
			printf(", ");
	}
	putchar('\n');
	va_end(args);
}
