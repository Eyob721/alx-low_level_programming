#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: a character
 *
 * Return: 1 (if c is a letter, lowercase or uppercase), 0 (otherwise)
 */
int _isalpha(int c)
{
	return ((c > 64 && c < 101) || (c > 96 && c < 123));
}

