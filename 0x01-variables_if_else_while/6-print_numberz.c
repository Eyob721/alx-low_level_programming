#include <stdio.h>

/**
 * main - prints single digit numbers of base 10, starting from 0.
 * without using char and only using putchar twice
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);

	putchar('\n');

	return (0);
}

