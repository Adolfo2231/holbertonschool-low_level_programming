#include <stdio.h>

/**
 * _strncpy - Copies a string up to `n` characters from `src` to `dest`.
 * @dest: The destination buffer where the content is copied.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from `src`.
 *
 * Description: This function copies up to `n` characters from `src` to `dest`.
 *              If `src` is shorter than `n`, the remaining bytes in `dest`
 *              will be filled with null bytes (`\0`). If `src` has `n` or more
 *              bytes, `dest` will not be null-terminated.
 *
 * Return: A pointer to the destination string `dest`.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from `src` to `dest` until `n` characters are copied */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad with null bytes if `src` is shorter than `n` */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
