#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format_handlers - Struct that holds format handler function pointers
 *							and the corresponding data types they handle
 * @type: type the function handles
 * @handle: pointer to the function to handle printing `tyepe`
 */
typedef struct format_handlers
{
	char type;
	void (*handle)(va_list);
} fmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Handlers for printing arguments of a certain type */
void handle_char(va_list args);
void handle_integer(va_list args);
void handle_float(va_list args);
void handle_string(va_list args);

#endif
