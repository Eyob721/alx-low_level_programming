#include "main.h"

void _puts(char *str);
/**
 * main - a program that prints its name
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int ac, char **av)
{
	(void)ac;
	_puts(*av);
	return (0);
}

/**
 * _puts - prints a string, followed by a new line
 * @str: a string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (str && *str)
		_putchar(*str++);

	_putchar('\n');
}
