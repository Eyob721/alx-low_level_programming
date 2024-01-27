#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (dest != NULL && src != NULL)
	{
		for (i = 0; src[i] != '\0' && i < n; i++)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}
	return (dest);
}
