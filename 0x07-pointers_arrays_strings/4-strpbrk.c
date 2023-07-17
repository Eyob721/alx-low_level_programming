#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 * any of the bytes in accept.
 * @s: a string
 * @accept: search key string
 *
 * Return: pointer to the found character in the string s, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	char chr, *a = accept;

	if (s != NULL && accept != NULL)
	{
		/* Check if a character from the string `s` is in `accept` */
		while (*s != '\0')
		{
			chr = *s;
			while (*a != '\0')
				if (chr == *(a++))
					return (s);
			/* Move to the next character in `s` */
			s++;
			/* Move `a` back to the begnning of `accept` */
			a = accept;
		}
	}
	return ('\0');
}
