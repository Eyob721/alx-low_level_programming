#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number in string format
 *
 * Return: converted number, or
 *		   0 if 'b' contains characters other than 0 or 1, or if 'b' is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0, len;

	if (b == NULL)
		return (0);
	len = _strlen((char *)b) - 1;
	while (i <= len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num += 1 << (len - i);
		++i;
	}
	return (num);
}

/**
 * _strlen - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s != NULL && *(s++) != '\0')
		len++;
	return (len);
}
