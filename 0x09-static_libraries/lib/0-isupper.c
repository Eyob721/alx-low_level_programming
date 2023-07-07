#include "main.h"

/**
 * _isupper - checks if a character is an UPPERCASE character
 * @c: a character, converted to int (its ASCII value).
 * Return: 1 (if c is uppercase), 0 (otherwise)
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
