#include "main.h"

/**
 * string_toupper - converts lowe case letters to upper case in a string
 * @str: a string
 *
 * Return: converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;

	return (str);
}
