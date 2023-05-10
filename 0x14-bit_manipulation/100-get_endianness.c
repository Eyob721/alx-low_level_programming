#include "main.h"

/**
 * get_endianness - checks for the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 0x012345678;
	char *c = (char *)&n;

	if (*c == 0x01)
		return (0);
	return (1);
}
