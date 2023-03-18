#include "main.h"

/**
 * print_times_table - print the n times table, starting with 0
 * if n is greater than 15, it will print a new line
 * @n: an integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prdt, next_prdt;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
			for (j = 0; j <= n; j++)
			{
				/* Print the product first */
				prdt = i * j;
				if (prdt < 10)
					_putchar(prdt + '0');
				else if (prdt < 100)
				{
					_putchar(prdt / 10 + '0');
					_putchar(prdt % 10 + '0');
				}
				else if (prdt < 1000)
				{
					_putchar(prdt / 100 + '0');
					_putchar(((prdt / 10) % 10) + '0');
					_putchar(prdt % 10 + '0');
				}
				/* Add commas and spaces, or a new line */
				if (j < n)
				{
					next_prdt = i * (j + 1);
					_putchar(',');
					_putchar(' ');
					if (next_prdt < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (next_prdt < 100)
						_putchar(' ');
				}
				else
					_putchar('\n');
		}
}

