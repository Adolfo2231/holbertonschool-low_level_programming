#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string to be searched.
 * @accept: The string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, found;

	/* Loop through each character in s */
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0; /* Reset found for each character in s */

		/* Check if the character s[i] is in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1; /* Character found in accept */
				break; /* Exit inner loop if found */
			}
		}

		/* If character is not found in accept, stop counting */
		if (!found)
		{
			break; /* Exit the loop if character is not in accept */
		}
		count++; /* Increment count for each accepted character */
	}

	return (count); /* Return the total count */
}

