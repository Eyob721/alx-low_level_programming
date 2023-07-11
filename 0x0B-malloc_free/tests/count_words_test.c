#include "main.h"
#include <stdio.h>

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
			while (*str == ' ' || *str == '\t')
				str++;
			if (*str != '\0')
			{
				no_of_words++;
				state = 1; /* go to WORD state */
			}
			break;
		case 1: /* WORD state */
			while (*str != ' ' && *str != '\t' && *str != '\0')
				str++;
			if (*str == ' ' || *str == '\t')
				state = 0; /*  go to SPACE state */
			break;
		}
	return (no_of_words);
}

/**
 * main - test for the count_word function
 *
 * Return: 0 on success, or 1 on error
 */
int main(void)
{
	char *str = "		I will show you how great             I      am        ";
	int words;

	words = count_words(str);
	printf("%d\n", words);
	return (0);
}
