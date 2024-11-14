#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlength - Calculates the length of a string
 * @str: The string whose length is to be calculated
 *
 * Return: The length of the string
 */
int _strlength(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string to a destination buffer
 * @dest: The destination buffer
 * @src: The source string to copy
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
 * new_dog - Creates a new dog structure with copies of name and owner
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog_t structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *name_copy, *owner_copy;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	/* Allocate memory and copy name */
	name_copy = malloc(_strlength(name) + 1);
	if (name_copy == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	_strcopy(name_copy, name);

	/* Allocate memory and copy owner */
	owner_copy = malloc(_strlength(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(my_dog);
		return (NULL);
	}
	_strcopy(owner_copy, owner);

	/* Assign copied values to the structure */
	my_dog->name = name_copy;
	my_dog->age = age;
	my_dog->owner = owner_copy;

	return (my_dog);
}

