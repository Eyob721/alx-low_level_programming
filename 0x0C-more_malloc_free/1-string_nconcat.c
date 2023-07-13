#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n number of bytes, to be concatenated from s2
 *
 * Return: pointer to a newly allocated memory which is a concatenation of
 *		   the two strings, or NULL if memory allocation fails
 * Description: The concatenated string contains s1 and the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *concat;

	/* If s1 or s2 are NULL, then treat them as empty strings */
	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	/* Find size for the new concatenated string */
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len2 = len2 < n ? len2 : n;
	concat = malloc(sizeof(char) * (len1 + len2 + 1)); /* +1 for '\0' */
	/* Check memory allocation */
	if (concat == NULL)
		return (NULL);
	/* Concatenate the two strings */
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i++] = s2[j];
	concat[i] = '\0';
	return (concat);
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

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
