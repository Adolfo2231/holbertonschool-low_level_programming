#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The input string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of `c` in `s`,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	/* Loop through each character in the string */
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]); /* Return address of the first occurrence */
		}	
		i++;

		/* Check for the null terminator, if c is '\0' */
		if (c == '\0')
		{
			return (&s[i]); /* Return address of the null terminator */
		}


	}
	return (s);
}
