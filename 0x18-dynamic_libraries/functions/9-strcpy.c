#include "main.h"

/**
 * _strcpy - copies the string src to dest, including the null character.
 * @src: source string
 * @dest: destination string
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest != NULL && src != NULL)
	{
		while (*src != '\0')
			dest[i++] = *(src++);
		dest[i] = '\0';
	}
	return (dest);
}

