#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available
 */
char *_strdup(char *str)
{
	int count = 0;
	char *array;
	int i;

	if (str == NULL)
		return (NULL);

	/* Count length without modifying 'str' */
	while (str[count] != '\0')
		count++;

	/* Allocate space for the copy, including null terminator */
	array = malloc((count + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	/* Copy the string including the null terminator */
	for (i = 0; i <= count; i++)
		array[i] = str[i];

	return (array);
}

