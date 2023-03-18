#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal using the character '\'
 * @n: number of times the character '\' is to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				else
					_putchar(' ');
}
