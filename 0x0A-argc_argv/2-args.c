#include "main.h"

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
	while (*av)
		puts(*av++);
	return (0);
}
