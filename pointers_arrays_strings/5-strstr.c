#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to search in.
 * @needle: The substring to find within `haystack`.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* Return haystack if needle is empty */
	if (*needle == '\0')
		return (haystack);

	/* Loop through each character in haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check if substring needle matches at current position */
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		/* If entire needle matched, return pointer to start */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	/* Return NULL if needle not found */
	return (NULL);
}

