#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument count
 * @argv: argument vector(array of string pointers)
 *
 * Return: 0 (Success), 1 (Otherwise)
 */
int main(int argc, char *argv[])
{
	int cents = 0, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins)
	{
		if (coins >= 25)
			coins -= 25;
		else if (coins >= 10)
			coins -= 10;
		else if (coins >= 5)
			coins -= 5;
		else if (coins >= 2)
			coins -= 2;
		else if (coins >= 1)
			coins -= 1;
		cents++;
	}
	printf("%d\n", cents);
	return (0);
}
