#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 0 if big endian, or 1 if litte=le endian
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (*ptr == 1)
		return (1); /* litte endian */
	return (0); /* big endian */
}
