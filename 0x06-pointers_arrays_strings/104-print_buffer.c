#include "main.h"

/**
 * print_buffer - a function that prints a buffer
 * @b: pointer to the buffer
 * @size: size of teh buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int pos = 0, i = 0;
	char pos_hex[] = "00000000", chr_hex[] = "00000000", *ptr = NULL;

	if (b == NULL)
		return;
	if (size == 0)
		putchar('\n');
	while (pos < size)
	{
		convert_to_hex(pos_hex, 9, pos);
		printf("%s: ", pos_hex);
		for (i = pos; i < pos + 10; i++)
		{
			if (i < size)
				ptr = convert_to_hex(chr_hex, 9, b[i]);
			else
				ptr = "  ";
			printf("%s", ptr);
			if (i % 2 != 0)
				putchar(' ');
		}
		for (i = pos; i < pos + 10 && i < size; i++)
		{
			/* Printable characters start from ASCII 32 */
			if (b[i] < 32)
				putchar('.');
			else
				putchar(b[i]);
		}
		putchar('\n');
		pos = i;
	}
}

/**
 * convert_to_hex - a function that converts a number to hex in string format
 * @hex_buf: buffer for the hex string
 * @buf_size: size of the buffer
 * @num: number to be converted
 *
 * Return: Address in the buffer of where the hex string starts
 * Description: The result is written on the given buffer starting
 *				from the back to the front, and returns the start
 *				point of the hex string.
 */
char *convert_to_hex(char *hex_buf, int buf_size, int num)
{
	char *hex = NULL, *digit = "0123456789abcdef";
	int quo, rem, i, no_of_hex_chars = 0;

	if (hex_buf == NULL || buf_size <= 0)
		return (NULL);
	i = buf_size - 1;
	hex_buf[i--] = '\0';
	quo = num;
	do {
		no_of_hex_chars++;
		rem = quo % 16;
		hex = hex_buf + i;
		hex_buf[i--] = digit[rem];
		quo /= 16;
	} while (quo != 0 && i >= 0);
	/* If it is only a single hex character, add a 0 prefix */
	if (no_of_hex_chars == 1)
		*(--hex) = '0';
	return (hex);
}
