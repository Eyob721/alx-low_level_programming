#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: a string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	unsigned int i, sign = 1, num = 0;

	if (s == NULL)
		return (0);
	/**
	 * Search for a number in the string
	 * Look for negative signs along the way
	 */
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == '-')
			sign *= -1;
		else if (_isdigit(s[i]))
			break;
	/* If there are no numbers return 0 */
	if (s[i] == '\0')
		return (0);
	/* If there are numbers then return the number */
	while (_isdigit(s[i]))
		num = (s[i++] - '0') + num * 10;
	/**
	 * NOTE: unsigned type is used to prevent errors for INT_MIN (-214748360)
	 * When INT_MIN is used, in the above loop the last expression will be
	 * 2147483640 + 8 -> which will cause overflow
	 */
	return (num * sign);
}
