#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string to search.
 * @accept: The set of characters to look for in `s`.
 *
 * Return: A pointer to the first occurrence in
 * `s` of any of the bytes in `accept`,
 * or NULL if none of the bytes are found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	/* Loop through each character in the string */
	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]); /* Return address of the first occurrence */
			}
			j++;
		}
		i++;
	}

	return (NULL); /* Character not found */
}
