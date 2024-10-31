#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Description: This function compares the strings `s1` and `s2`
 *              lexicographically. It returns an integer less than,
 *              equal to, or greater than zero if `s1` is found,
 *              respectively, to be less than,
 *              to match, or be greater than `s2`.
 *
 * Return: An integer result of the comparison:
 *         - 0 if `s1` and `s2` are equal
 *         - Negative if `s1` is less than `s2`
 *         - Positive if `s1` is greater than `s2`
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters in `s1` and `s2` one by one */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			/* Return the difference between the ASCII values of the characters */
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* If loop exits, the strings are identical up to this point */
	return (s1[i] - s2[i]);
}

