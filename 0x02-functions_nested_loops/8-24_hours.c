#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
		for (b = 0; b < 10; b++)
			for (c = 0; c < 6; c++)
				for (d = 0; d < 10; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					/*
					* To exit out of the loop when it reaches 23:59
					* assign b its last value, i.e 10
					*/
					if (a == 2 && b == 3 && c == 5 && d == 9)
						b = 10;
				}
}

