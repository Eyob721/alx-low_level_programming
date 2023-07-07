#include "main.h"

int _is_number(char *s);
/**
 * main - a program that adds positive numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int ac, char **av)
{
	int sum = 0;

	(void)ac;
	while (*(++av))
	{
		if (_is_number(*av))
			sum += atoi(*av);
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _is_number - a function that checks if a string is an integer number
 * @s: string
 *
 * Return: 1 if the string is a number, 0 if it is not
 */
int _is_number(char *s)
{
	while (s && *s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}
