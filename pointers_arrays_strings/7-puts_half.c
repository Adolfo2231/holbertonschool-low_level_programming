#include "main.h"
#include <stdio.h>
#include "2-strlen.c" /* Include for strlen */

/**
 * puts_half - Prints half of a string, followed by a newline.
 * @str: Pointer to the string.
 *
 * Description: This function prints the second half of the string.
 *              If the number of characters is odd, it prints the last
 *              (length_of_the_string - 1) / 2 characters.
 */

void puts_half(char *str)
{
	int len = _strlen(str); /* Get the length of the string */
	int start;
	int i;

	/* Determine the starting point for printing */
	if (len % 2 == 0) /* If even length */
	{
		start = len / 2; /* Start from the middle */
	}
	else /* If odd length */
	{
		start = (len / 2) + 1; /* Start from one character after the middle */
	}

	/* Print the second half of the string */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]); /* Assuming _putchar is defined elsewhere */
	}
	_putchar('\n'); /* Print a newline at the end */
}

