#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which `src` will be appended.
 * @src: The source string to append to `dest`.
 *
 * Return: Pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';  /* Null-terminate the concatenated string */

	return (dest);
}
