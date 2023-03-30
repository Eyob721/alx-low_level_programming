#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type dog
 * @d: pointer to the variable to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !owner)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
