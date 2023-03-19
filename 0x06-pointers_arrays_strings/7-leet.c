#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: a string
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char code[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; letter[j] != '\0'; j++)
			if (str[i] == letter[j])
			{
				str[i] = code[j / 2];
				break;
			}
	return (str);
}
