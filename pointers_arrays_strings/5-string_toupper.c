#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Description: This function iterates through each character of the
 * string and converts lowercase letters to uppercase. The original
 * string is modified in place, and a pointer to the modified string
 * is returned.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i; /* Index variable for iterating through the string */

	i = 0; /* Initialize index to start from the first character */

	/* Iterate through each character of the string until the null terminator */
	while (str[i] != '\0') /* Check for the end of the string */
	{
		/* Check if the current character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z') /* Check for lowercase range */
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - ('a' - 'A'); /* Adjust ASCII value to convert */
		}
		i++; /* Move to the next character in the string */
	}
	return (str); /* Return the pointer to the modified string */
}

