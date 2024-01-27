#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: a string
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
			_putchar(*(str++));
		_putchar('\n');
	}
}

