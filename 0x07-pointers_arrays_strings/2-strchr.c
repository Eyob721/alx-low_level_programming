#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a character
 *
 * Return: pointer to the character in the string, or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			if (*s == c)
				return (s);
			s++;
		}
		/**
		 * If `c` is also '\0',
		 * then return a pointer to the '\0' character in the string
		 */
		if (c == '\0')
			return (s);
	}
	return ('\0');
}

