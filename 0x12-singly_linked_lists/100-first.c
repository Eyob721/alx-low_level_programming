#include <stdio.h>

void tortoise_wins(void) __attribute__((constructor));
/**
 * tortoise_wins - a function that is executed before main
 *
 * Return: void
 */
void tortoise_wins(void)
{
	char *s1 = "You're beat! and yet, you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";

	printf("%s%s", s1, s2);
}
