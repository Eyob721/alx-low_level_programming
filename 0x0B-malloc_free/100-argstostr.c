#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the newly allocated concatenated string of arguments, or
 *		   NULL, if ac <= 0, if av is NULL, or if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);
	/* Find the size of the concatenated string of arguments */
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		/* Add the '\n' character to the size */
		size++;
	}
	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (size + 1)); /* +1 for the '\0' character */
	if (str == NULL)
		return (NULL);
	/* Concatenate the arguments in to the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		/* Add the '\n' character after an argument */
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
