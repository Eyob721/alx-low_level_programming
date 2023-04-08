#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: a long integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int and_mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (and_mask <<= 63; (n & and_mask) == 0; and_mask >>= 1)
		;
	while (and_mask > 0)
	{
		_putchar(n & and_mask ? '1' : '0');
		and_mask >>= 1;
	}
}
