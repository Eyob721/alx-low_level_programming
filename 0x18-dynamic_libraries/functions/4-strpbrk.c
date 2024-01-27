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
	char *a = accept;

	if (s != NULL && accept != NULL)
	{
		/* Check if a character from the string `s` is in `accept` */
		while (*s != '\0')
		{
			while (*a != '\0')
				if (*s == *(a++))
					return (s);
			/* Move to the next character in `s` */
			s++;
			/* Move `a` back to the begnning of `accept` */
			a = accept;
		}
	}
	return (NULL);
}
