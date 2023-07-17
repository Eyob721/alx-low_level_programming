#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: a string
 * @accept: a prefix substring
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char chr, *a = accept;

	if (s != NULL && accept != NULL)
	{
		while (*s != '\0' && *s != ' ')
		{
			/* Check if a character from the string `s` is in `accept` */
			chr = *s;
			while (*a != '\0')
			{
				if (s == *(a++))
				{
					count++;
					break;
				}
			}
			/* Move to the next character in `s` */
			s++;
			/* Move back `a` to the begnning of `accept` */
			a = accept;
		}
	}
	return (count);
}

