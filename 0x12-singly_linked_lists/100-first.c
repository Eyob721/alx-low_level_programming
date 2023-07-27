#include "lists.h"
#include <stdio.h>

/**
 * i_beat_main - a function that prints a string before main
 *
 * Return: void
 */
void i_beat_main(void) __attribute__((constructor));
void i_beat_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

