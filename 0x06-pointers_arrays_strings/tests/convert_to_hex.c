#include <stdio.h>
#include <stdlib.h>

/**
 * convert_to_hex - a function that converts a number to hex in string format
 * @hex_buf: buffer for the hex string
 * @buf_size: size of the buffer
 * @num: number to be converted
 *
 * Return: Address in the buffer of where the hex string starts
 * Description: The function takes a number and converts it to hexadecimal
 *				in string format. The result is written on the given buffer
 *				starting from the back to the front, and returns the start
 *				point of the hex string.
 */
char *convert_to_hex(char *hex_buf, int buf_size, int num)
{
	char *hex = NULL, *digit = "0123456789abcdef";
	int quo, rem, i;

	if (hex_buf == NULL || buf_size <= 0)
		return (NULL);
	i = buf_size - 1;
	hex_buf[i--] = '\0';
	quo = num;
	do {
		rem = quo % 16;
		hex = hex_buf + i;
		hex_buf[i--] = digit[rem];
		quo /= 16;
	} while (quo != 0 && i >= 0);
	return (hex);
}

/**
 * main - test for convert_to_hex function
 * 
 * Return: 0 on success, or 1 on error
 */
int main(int ac, char **av)
{
	char *hex = NULL, hex_buf[9] = {0};
	int num;

	if (ac != 2)
	{
		printf("Usage: ./convert num\n");
		return (1);
	}
	num = atoi(*(av + 1));
	hex = convert_to_hex(hex_buf, 9, num);
	printf("%s\n", hex);
	return (0);
}