#include <stdlib.h>
#include "dog.h"

/**
 * _strlength - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlength(char *s)
{
	int len = 0;

	while (s && s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string to a new location
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	/* Allocate memory for the new dog structure */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	name_copy = malloc(_strlength(name) + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcopy(name_copy, name);

	/* Allocate memory and copy the owner */
	owner_copy = malloc(_strlength(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	_strcopy(owner_copy, owner);

	/* Initialize the dog structure */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
