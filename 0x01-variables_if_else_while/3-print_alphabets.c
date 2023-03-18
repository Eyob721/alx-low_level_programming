#include <stdio.h>

/**
 * main - prints lowercase then UPPERCASE letters followed by a new line
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);

	for (i = 65; i < 91; i++)
		putchar(i);

	putchar('\n');

	return (0);
}

