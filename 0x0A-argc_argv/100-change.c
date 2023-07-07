#include "main.h"

/**
 * main - a program that prints the minimum number of coins to
 *		  make change for an amount of money.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int ac, char **av)
{
	int num, no_of_coins = 0;

	if (ac != 2)
	{
		puts("Error");
		return (1);
	}
	num = atoi(av[1]);
	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else
			num -= 1;
		no_of_coins++;
	}
	printf("%d\n", no_of_coins);
	return (0);
}
