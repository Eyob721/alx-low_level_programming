#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that checks if the last digit of a random number is
 * greater than 5, is equal to 0, or is less than 6 and not equal to 0
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);

	return (0);
}

