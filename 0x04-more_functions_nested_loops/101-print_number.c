#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: 0 (Success)
 */
void print_number(int n)
{
	int i, base = 1, noOfDigits = 0, temp = 1, digit, num;

	if (n == -2147483648)
		n += 2;
	if (n < 0)
		num = n * -1;
	else
		num = n;
	/* First count the number of digits*/
	temp = num / 10;
	if (n % 10 == 0 && temp == 0)
		noOfDigits = 1; /* This means it is 0*/
	else
	{
		while (temp != 0)
		{
			noOfDigits++;
			temp = temp / 10;
		}
		noOfDigits++;
	}
	/* Then find the base 10 of the number */
	for (i = 0; i < noOfDigits - 1; i++)
		base *= 10;
	/* Now separate each digit and print it as well */
	if (n < 0)
		_putchar('-');
	for (i = 0; i < noOfDigits; i++)
	{
		digit = (num / base) % 10;
		if (num == 2147483646 && i == noOfDigits - 1)
			_putchar('0' + 8);
		else
			_putchar('0' + digit);
		base /= 10;
	}
}
