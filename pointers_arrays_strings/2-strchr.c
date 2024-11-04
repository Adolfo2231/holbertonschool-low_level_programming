#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The input string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of `c` in `s`,
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
}
