#include "main.h"

int _strlen(char *s);
void reverse_string(char *s, char *r, int size);
int compare_string(char *s, char *r);

/**
 * is_palindrome - a function that returns 1,
 * if a string is a palindrome, and 0 if not.
 * @s: a string
 * Return: 1 (if s is a palindrome), 0 (otherwise)
 */
int is_palindrome(char *s)
{
	int n, size = 0;
	char reverse[10000];

	size = _strlen(s);
	reverse_string(s, reverse, size);
	n = compare_string(s, reverse);
	return (n);
}

/**
 * _strlen - a function that return size of a string
 * @s: a string
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
 * reverse_string - a function that reverses a string
 * @s: a string
 * @r: reversed string
 * @size: size of the string (s)
 * Return: void
 */
void reverse_string(char *s, char *r, int size)
{
	if (size == -1)
		;
	else
	{
		*r = *(s + (size - 1));
		*(r + 1) = '\0';
		reverse_string(s, r + 1, size - 1);
	}
}

/**
 * compare_string - a function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 (if they are equal), 0 (otherwise)
 */
int compare_string(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	else
		return (compare_string(s1 + 1, s2 + 1));
}
