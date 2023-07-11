#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *			 memory, which contains a copy of the string given as a parameter
 * @str: a given string
 *
 * Return: pointer to a newly allocated duplicate of the given string, or
 *		   NULL, if the given string is NULL, or if memory allocation failed
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	/* Find length for str, use i to store length */
	for (i = 0; str[i] != '\0'; i++)
		;
	dup = malloc(sizeof(char) * (i + 1)); /* +1 for '\0' character*/
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
