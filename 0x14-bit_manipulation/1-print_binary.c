#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: an unsigned long integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 63;
	unsigned long int and_mask = 1;

	while (i > 0 && (n & and_mask << i) == 0)
		--i;
	while (i >= 0)
		_putchar(n & and_mask << i-- ? '1' : '0');
}
