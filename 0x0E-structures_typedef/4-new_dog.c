#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: a string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}

/**
 * _strcpy - copies the string src to dest, including the null character.
 * @src: source string
 * @dest: destination string
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = *(src + i);

	return (dest);
}

/**
 * new_dog- a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(_strlen(name) * sizeof(char) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(_strlen(owner) * sizeof(char) + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->owner, owner);

	return (dog);
}
