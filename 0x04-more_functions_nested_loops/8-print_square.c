#include "main.h"

/**
 * print_square - a function that prints a square using the character '#'
 * @size: size fo the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
}
