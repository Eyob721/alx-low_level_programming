#include "main.h"

/**
 * str_concat - a function that concatenates two strings using malloc
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, NULL (otherwise)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		len++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		len++;
	len++;

	concat = malloc(sizeof(char) * len);

	if (concat)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			*(concat + i) = *(s1 + i);
		for (j = 0; *(s2 + j) != '\0'; j++, i++)
			*(concat + i) = *(s2 + j);
		*(concat + i) = '\0';
	}

	return (concat);
}
