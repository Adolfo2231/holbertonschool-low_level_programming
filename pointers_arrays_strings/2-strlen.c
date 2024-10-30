#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 *
 * Description: This function counts the number of characters in
 *              the string pointed to by s, excluding the null
 *              terminator.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0') /* Loop until the null terminator is reached */
	{
		length++; /* Counts the char */
		s++; /* Move to the next char */
	}

	return (length); /* Return the length of the string */
}
