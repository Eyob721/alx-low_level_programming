#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated memory which is a concatenation of
 *		   the two strings, or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size = 0;
	char *concat;

	/* If s1 or s2 are NULL, then treat them as empty strings */
	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	/* Find size for the new concatenated string */
	size = 0;
	for (i = 0; s1[i] != '\0'; i++)
		size++;
	for (i = 0; s2[i] != '\0'; i++)
		size++;
	concat = malloc(sizeof(char) * (size + 1)); /* +1 for '\0' character */
	/* Check memory allocation */
	if (concat == NULL)
		return (NULL);
	/* Concatenate the two strings */
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concat[i++] = s2[j];
	concat[i] = '\0';
	return (concat);
}
