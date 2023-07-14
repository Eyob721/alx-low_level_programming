#include "main.h"

char *create_array(unsigned int size, char c);
void add_digit(char *buf, int idx, int digit);
int _strlen(char *s);
int _is_number(char *s);
/**
 * main - a program that multiplies two positive numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return:
 *		- 0 on success
 *		- 98 on error, error being, when the argument count is different from 3,
 *		  if the arguments are not numbers, or if memory allocation fails
 */
int main(int ac, char **av)
{
	int digits_prdt, digit1, digit2, carry, len1, len2, i, j, k, idx;
	char *prdt_buf, *prdt;

	if (ac != 3)
	{
		puts("Error");
		return (98);
	}
	if (_is_number(av[1]) == 0 || _is_number(av[2]) == 0)
	{
		puts("Error");
		return (98);
	}
	len1 = _strlen(av[1]);
	len2 = _strlen(av[2]);
	prdt_buf = create_array((len1 + len2 + 1), '0');
	if (prdt_buf == NULL)
		return (98);
	/*
	 * i - index for num1(av[1])
	 * j - index for num2(av[2])
	 * idx - index for prdt_buf
	 * k - counter used to decrease the value of idx
	 */
	idx = len1 + len2 - 1;
	for (j = len2 - 1; j >= 0; j--)
	{
		digit2 = av[2][j] - '0';
		for (i = len1 - 1, k = 0; i >= 0; i--)
		{
			digit1 = av[1][i] - '0';
			digits_prdt = digit1 * digit2;
			carry = digits_prdt / 10;
			add_digit(prdt_buf, idx - k, digits_prdt % 10);
			add_digit(prdt_buf, idx - (++k), carry);
		}
		idx--;
	}
	prdt_buf[len1 + len2] = '\0';
	prdt = prdt_buf;
	for (i = 0; prdt_buf[i] == '0' && prdt_buf[i] != '\0'; i++)
		prdt++;
	if (prdt_buf[i] == '\0')
		printf("%s\n", "0");
	else
		printf("%s\n", prdt);
	free(prdt_buf);
	return (0);
}

/**
 * add_digit - a function that add a digit to a memory buffer
 *			   which contains a number in string format
 * @buf: buffer, which contains a number in string format
 * @idx: index
 * @digit: digit to add
 *
 * Return: void
 * Description: the digit is added on the right most digit of the number
 *				in the buffer
 */
void add_digit(char *buf, int idx, int digit)
{
	int digit2, sum, carry;

	if (buf == NULL || idx < 0)
		return;
	do {
		digit2 = buf[idx] - '0';
		sum = digit + digit2;
		carry = sum / 10;
		buf[idx--] = (sum % 10) + '0';
		digit = carry;
	} while (idx >= 0 && carry != 0);
}

/**
 * create_array - a function that creates an array of chars
 *				  and initializes it with a specific char
 * @size: size of the character array
 * @c: a character
 *
 * Return: pointer to the dynamically allocated character array, or
 *		   NULL if malloc fails, or if size is zero or less
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chr_arr;

	if (size <= 0)
		return (NULL);
	chr_arr = malloc(sizeof(char) * size);
	if (chr_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		chr_arr[i] = c;
	return (chr_arr);
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

/**
 * _strlen - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s != NULL && s[i] != '\0'; i++)
		length++;
	return (length);
}
