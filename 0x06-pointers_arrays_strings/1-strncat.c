#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	if (dest != NULL && src != NULL)
	{
		while (dest[i] != '\0')
			i++;
		while (j < n && src[j] != '\0')
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (dest);
}

