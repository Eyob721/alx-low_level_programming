#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	if (dest != NULL && src != NULL)
	{
		while (*d != '\0')
			d++;
		while (*src != '\0')
			*(d++) = *(src++);
		*d = '\0';
	}
	return (dest);
}

