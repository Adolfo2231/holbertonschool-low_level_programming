#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line made of backslashes
 * ('\') based on the input parameter `n`. If `n` is zero or less, it
 * prints a newline only.
 */
void print_diagonal(int n)
{
	int i, j; /* Loop counters */

	if (n <= 0) /* Check if n is zero or negative */
	{
		_putchar('\n'); /* Print a newline */
		return; /* Exit the function */
	}
	for (i = 0; i < n; i++) /* Outer loop for the number of lines */
	{
		for (j = 0; j < i; j++) /* Inner loop for spaces */
		{
			_putchar(' '); /* Print spaces for indentation */
		}
		_putchar('\\'); /* Print the diagonal character */
		_putchar('\n'); /* Move to the next line */
	}
}
