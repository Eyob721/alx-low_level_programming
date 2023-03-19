#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a string
 *
 * Return: a capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}"; /* separator of words */

	if (str[0] != '\0')
	{
		/* Capitalize the first letter*/
		if (str[0] > 96 && str[0] < 123)
			str[0] -= 32;
		/* Now for the rest of the words */
		for (i = 1; str[i] != '\0'; i++)
			for (j = 0; sep[j] != '\0'; j++)
				if (str[i + 1] != '\0' && str[i] == sep[j])
					if (str[i + 1] > 96 && str[i + 1] < 123)
						str[i + 1] -= 32;
	}

	return (str);
}
