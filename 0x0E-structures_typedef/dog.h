#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * struct dog - a structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This is a data structure to hold information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
