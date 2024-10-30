#include "main.h"
#include "2-strlen.c" /* Include for strlen */
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 *
 * Description: This function prints every other character in the
 *              string pointed to by str, followed by a newline.
 */

void puts2(char *str)
{
	int i; /* Use size_t for compatibility with strlen */

	for (i = 0; i < _strlen(str); i++) /* Correctly use strlen on str */
	{
		if ((i % 2) == 0) /* Check if index is even */
		{
			_putchar(str[i]); /* Print the character at index i */
		}
	}
	_putchar('\n'); /* Print a newline at the end */
}


