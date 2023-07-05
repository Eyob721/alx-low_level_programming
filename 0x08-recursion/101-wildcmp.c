#include "main.h"

int _strlen(char *s);
int initial_len(char *s);
int wild_compare_strings(char *s1, char *s2, int size1, int size2, int wild);

/**
 * wildcmp - a function that compares two strings and returns 1 if the
 *			strings can be considered identical, otherwise return 0.
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 (if the strings are considered to be identical), 0 (otherwise).
 */
int wildcmp(char *s1, char *s2)
{
	int size1, size2, wild_len, init_len;

	if (!s1 || !s2)
		return (0);
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	init_len = initial_len(s2);
	wild_len = size2 - init_len;
	return (wild_compare_strings(s1, s2, size1, size2, wild_len));
}

/**
 * _strlen - a function that return size of a string
 * @s: a string
 *
 * Return: size of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * initial_len - a function that determines the length of the initial segment
 * of the string up to a wildcard character (*)
 * @s: a string
 *
 * Return: size of the initial segment of a string
 */
int initial_len(char *s)
{
	if (*s == '*')
		return (0);
	else
		return (1 + initial_len(s + 1));
}

/**
 * wild_compare_strings - compares two strings, and handle the * wildcard
 * @s1: first string
 * @s2: second string
 * @size1: size fo the first string
 * @size2: size of the second string
 * @wild: size of the wild segment of a string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wild_compare_strings(char *s1, char *s2, int size1, int size2, int wild)
{
	if (s2[size2 - 1] == '*')
	{
		if (s2[size2 - 2] == '.' && wild - 1 == 0)
			return (wild_compare_strings(s1, s2, size1 - 1, size2 - 2, wild - 1));
		if (s2[size2 - 2] != '*' && wild - 1 != 0)
			return (wild_compare_strings(s1, s2, size1, size2 - 1, wild - 1));
		else
			return (1);
	}
	if (size2 == 0 || size1 == 0)
		return (1);
	if (s1[size1 - 1] != s2[size2 - 1])
		return (0);
	else
		return (wild_compare_strings(s1, s2, size1 - 1, size2 - 1, wild - 1));
}
