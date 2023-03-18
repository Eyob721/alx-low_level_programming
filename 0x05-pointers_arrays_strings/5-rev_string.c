#include <stdio.h>

/**
 * rev_string - reverses a given string
 * @s: a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, length = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0, j = length - 1; i < length / 2; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
