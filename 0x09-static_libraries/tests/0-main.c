#include "main.h"
#include <stdio.h>

int main(void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
	printf("strlen: %d\n",_strlen("This works"));
	printf("strstr: %s\n", _strstr("This also works", "works"));
	return (0);
}
