#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most `n` bytes from `src`.
 * @dest: The destination string to be concatenated upon.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to use from `src`.
 *
 * Description: This function appends the `src` string to the `dest` string,
 *              overwriting the null byte (`\0`) at the end of `dest`, and
 *              then adding a new null byte to terminate the resulting string.
 *              If `src` has `n` or more bytes,
 *              it doesn't need to be null-terminated.
 * Return: A pointer to the resulting `dest` string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the end of `dest` */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append `src` to `dest`, using at most `n` characters from `src` */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Null-terminate the resulting string */
	dest[dest_len + i] = '\0';
	return (dest);
}
