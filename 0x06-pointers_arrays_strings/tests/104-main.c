#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	char buffer2[] = "A short buffer for testing";
	
	printf("%s\n", "Test 1");
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));

	printf("%s\n", "Test 2");
	printf("---------------------------------\n");
	print_buffer(buffer, 0);

	printf("%s\n", "Test 3");
	printf("---------------------------------\n");
	print_buffer(NULL, 100);

	printf("%s\n", "Test 4");
	printf("---------------------------------\n");
	print_buffer(buffer2, 5);

	printf("%s\n", "Test 5");
	printf("---------------------------------\n");
	print_buffer(buffer2, 50);

	return (0);
}
