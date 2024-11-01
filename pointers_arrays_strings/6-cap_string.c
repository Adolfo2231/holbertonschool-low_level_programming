#include "main.h" /* Include the header file with function prototypes */

/**
 * cap_string - Capitalizes the first letter of each word in a string.
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
    int capitalize_next; /* Flag to indicate if next character should be capitalized */
    char separators[] = " \t\n,;.!?\"(){}"; /* List of separators */

    i = 0; /* Initialize index */
    capitalize_next = 1; /* Set to true for the first character */

    /* Iterate through each character of the string until the null terminator */
    while (str[i] != '\0') /* Check for the end of the string */
    {
        /* Check if we need to capitalize the current character */
        if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') /* Only lowercase letters */
        {
            str[i] = str[i] - ('a' - 'A'); /* Convert to uppercase */
            capitalize_next = 0; /* Reset flag after capitalizing */
        }
        /* Check if current character is a separator */
        else
        {
            int j; /* Variable to iterate through the separators */

            /* Loop through each separator character */
            for (j = 0; separators[j] != '\0'; j++)
            {
                if (str[i] == separators[j]) /* If character is a separator */
                {
                    capitalize_next = 1; /* Set flag to capitalize next letter */
		    break; /* Exit the separator check loop */
                }
            }
        }

        i++; /* Move to the next character in the string */
    }

    return (str); /* Return the pointer to the modified string */
}
