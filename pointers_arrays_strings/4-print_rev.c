#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: This function calculates the length of the string
 *              and then prints it in reverse order, followed by
 *              a new line.
 */
void print_rev(char *str)
{
	int length = 0; /* Initialize length to 0 */

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse order */
	while (length > 0)
	{
		_putchar(str[length - 1]); /* Print the current character */
		length--;
	}
	_putchar('\n'); /* Print a new line after the string */
}

