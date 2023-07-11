#include "main.h"

/**
 * strtow - a function that splits a string into words
 * @str: a given string
 *
 * Return: an array of words, or
 *		   NULL if str == NULL, if str == "", or if memory allocation fails
 */
char **strtow(char *str)
{
	int i = 0, j = 0, no_of_words = 0, state = 0;
	char **str_arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	no_of_words = count_words(str);
	if (no_of_words == 0)
		return (NULL);
	str_arr = malloc(sizeof(char *) * (no_of_words + 1)); /* +1 for NULL */
	if (str_arr == NULL)
		return (NULL);
	while (*str != '\0' && i < no_of_words)
		switch (state)
		{
		case 0: /* SPACE State */
			while (*str == ' ')
				str++;
			if (*str != '\0')
				state = 1; /* go to WORD State */
			break;
		case 1: /* WORD State */
			str_arr[i] = word_dup(str);
			if (str_arr[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(str_arr[j]);
				free(str_arr);
				return (NULL);
			}
			while (*str != ' ' && *str != '\0')
				str++;
			if (*str == ' ')
				state = 0; /* go to SPACE State */
			i++;
			break;
		}
	str_arr[i] = NULL;
	return (str_arr);
}

/**
 * count_words - a function that counts the number of words in a string
 * @str: a given string
 *
 * Return: no of words in a string
 * Description: the function uses state machine to count number of words
 */
int count_words(char *str)
{
	int no_of_words = 0, state = 0; /* SPACE */

	while (str && *str != '\0')
		switch (state)
		{
		case 0: /* SPACE state */
			while (*str == ' ')
				str++;
			if (*str != '\0')
			{
				no_of_words++;
				state = 1; /* go to WORD state */
			}
			break;
		case 1: /* WORD state */
			while (*str != ' ' && *str != '\0')
				str++;
			if (*str == ' ')
				state = 0; /*  go to SPACE state */
			break;
		}
	return (no_of_words);
}

/**
 * word_dup - a function that returns a pointer to a newly allocated space in
 *			 memory, which contains a copy of the first word in a given string
 * @str: a given string
 *
 * Return: pointer to the duplicate of the first word in the given string, or
 *		   NULL, if the given string is NULL, or if memory allocation failed
 */
char *word_dup(char *str)
{
	int i;
	char *word_dup;

	if (str == NULL)
		return (NULL);
	/* Find length of the word, use i to store length */
	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
		;
	word_dup = malloc(sizeof(char) * (i + 1)); /* +1 for '\0' character*/
	if (word_dup == NULL)
		return (NULL);
	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
		word_dup[i] = str[i];
	word_dup[i] = '\0';
	return (word_dup);
}
