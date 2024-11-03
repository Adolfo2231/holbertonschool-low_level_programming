#include "main.h" /* Include the header file with function prototypes */

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be modified.
 * Description: This function replaces specific
 * characters in a string with
 * their 1337 (leet) equivalents.
 * Only one 'if' statement is used in the code,
 * along with two loops.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL"; /* Characters to be replaced */
	char leet_chars[] = "43071";    /* Leet equivalents for a, e, o, t, l */

	/* Iterate through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through the list of characters to be replaced */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* Check if current character matches any character in the letters array */
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j / 2];
				/* Replace with the corresponding leet character */
				break; /* Exit inner loop after replacement */
			}
		}
	}
	return (str); /* Return the pointer to the modified string */
}

