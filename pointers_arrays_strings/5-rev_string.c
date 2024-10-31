#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function reverses the string pointed to by s.
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1; /* Set the end index */

	/* Swap characters from start and end until the middle is reached */
	while (start < end)
	{
		/* Swap characters */
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		/* Move towards the middle */
		start++;
		end--;
	}
}
