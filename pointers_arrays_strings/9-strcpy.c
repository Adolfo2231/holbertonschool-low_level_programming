#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to dest.
 *
 * Description: This function copies the string from src, including the
 *              null byte, to the destination buffer dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character from src to dest, including the null byte */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Add the null byte to the end of the destination string */
	dest[i] = '\0';
	return (dest);
}

