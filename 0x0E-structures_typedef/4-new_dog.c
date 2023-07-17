#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);
/**
 * new_dog - a function that makes a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly allocated dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	/**
	 * While checking if memory allocation failed,
	 * make sure that the NULL was caused by memory failure, not by the passed
	 * values of the members being NULL
	 * If the passed values are NULL, then NULL will be assigned to the members
	 */
	nd->name = _strdup(name);
	if (name != NULL && nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->age = age;
	nd->owner = _strdup(owner);
	if (owner != NULL && nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	return (nd);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *			 memory, which contains a copy of the string given as a parameter
 * @str: a given string
 *
 * Return: pointer to a newly allocated duplicate of the given string, or
 *		   NULL, if the given string is NULL, or if memory allocation failed
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	/* Find length for str, use i to store length */
	for (i = 0; str[i] != '\0'; i++)
		;
	dup = malloc(sizeof(char) * (i + 1)); /* +1 for '\0' character*/
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
