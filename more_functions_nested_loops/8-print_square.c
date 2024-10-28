#include "main.h"

/**
 * print_square - Prints a square of size `size`, followed by a new line.
 * @size: The size of the square to be printed.
 *
 * Description: This function prints a square of `#` characters of
 * dimension `size x size`. If `size` is zero or less, it prints
 * only a newline.
 */

void print_square(int size)
{
	int i, j; /* Loop counters */

	if (size <= 0) /* Check if n is zero or negative */
	{
		_putchar('\n'); /* Print a newline */
		return; /* Exit the function */
	}

	for (i = 0; i < size; i++) /* Outer loop for the number of lines */
	{
		for (j = 0; j < size; j++) /* Inner loop for spaces */
		{
			_putchar('#'); /* Print spaces for indentation */
		}
		_putchar('\n'); /* Move to the next line */
	}
}
