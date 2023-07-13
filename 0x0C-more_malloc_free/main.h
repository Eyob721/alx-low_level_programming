#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Main Functions */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Support Functions */
int _strlen(char *s);

#endif
