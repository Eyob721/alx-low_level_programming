#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
