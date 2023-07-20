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
	int i = 0, j;
	va_list args;
	fmt_t fmt_hndl[] = {
		{'c', handle_char},
		{'i', handle_integer},
		{'f', handle_float},
		{'s', handle_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (fmt_hndl[j].type != '\0')
		{
			if (format[i] == fmt_hndl[j].type)
			{
				fmt_hndl[j].handle(args);
				break;
			}
			j++;
		}
		i++;
		if (fmt_hndl[j].type != '\0' && format[i] != '\0')
			printf(", ");
	}
	putchar('\n');
	va_end(args);
}

/**
 * handle_char - handles printing char type arguments
 * @args: pointer to the next argument
 *
 * Return: void
 */
void handle_char(va_list args)
{
	/* NOTE: You can't use char, because it will be promoted to int */
	putchar(va_arg(args, int));
}

/**
 * handle_integer - handles printing integer type arguments
 * @args: pointer to the next argument
 *
 * Return: void
 */
void handle_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * handle_float - handles printing float type arguments
 * @args: pointer to the next argument
 *
 * Return: void
 */
void handle_float(va_list args)
{
	/* NOTE: You can't use float, because it will be promoted to double */
	printf("%f", va_arg(args, double));
}

/**
 * handle_string - handles printing string type arguments
 * @args: pointer to the next argument
 *
 * Return: void
 */
void handle_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("%s", "(nil)");
	else
		printf("%s", str);
}

