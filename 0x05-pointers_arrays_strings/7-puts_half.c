#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
