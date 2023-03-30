#include "dog.h"

/**
 * free_dog - a function that frees memory allocated by dog_t type
 * @d: pointer to memory allocated by dog_t type
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
