#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: less than, greater than or equal to zero
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 != NULL && s2 != NULL)
		while (*s1 != '\0' || *s2 != '\0')
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
			s1++, s2++;
		}
	return (0);
}
