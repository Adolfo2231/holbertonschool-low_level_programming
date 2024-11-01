#include "main.h" /* Include the header file with function prototypes */

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string to be modified.
 *
 * Description: This function capitalizes the first letter of each word
 * in the string. Words are separated by spaces, tabs, new lines, or
 * specific punctuation characters.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i; /* Index variable for iterating through the string */

	int capitalize_next;
	/* Flag to indicate if next character should be capitalized */

	int j;
	char separators[] = "\t\n,;.!?\"(){}"; /* List of separators */

	i = 0; /* Initialize index */
	capitalize_next = 1; /* Set to true for the first character */

	/* Iterate through each character of the string until the null terminator */
	while (str[i] != '\0') /* Check for the end of the string */
	{
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++) /* Loop through separators */
		{
			if (str[i] == separators[j]) /* If a separator is found */
			{
				capitalize_next = 1; /* Next character should be capitalized */
				break; /* Exit the loop for separators */
			}
		}

		/* Capitalize the current character if the flag is set */
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
			/* Check if character is lowercase */
		{
			str[i] = str[i] - ('a' - 'A'); /* Convert to uppercase */
		}

		/* Reset the flag */
		else if (str[i] != ' ') /* If current character is not a space */
		{
			capitalize_next = 0; /* Next character should not be capitalized */
		}

		i++; /* Move to the next character in the string */
	}
	return (str); /* Return the pointer to the modified string */
}
