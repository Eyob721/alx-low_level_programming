#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: binary number in string format
 *
 * Return: converted decimal number, or 0 if it failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, power;
	int i, is_binary = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0' && is_binary; i++)
		if (b[i] != '0' && b[i] != '1')
			is_binary = 0;
	if (!is_binary)
		return (0);
	for (i -= 1, power = 0; i >= 0; i--, power++)
		num += (b[i] - '0') << power;
	return (num);
}
