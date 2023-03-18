#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @x: an integer
 *
 * Return: the last digit of @x
 */
int print_last_digit(int x)
{
	int digit = x % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}

