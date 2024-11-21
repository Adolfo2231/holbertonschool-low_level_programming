#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of integers
 * and prints them, separated by the provided `separator` string.
 * If `separator` is NULL, numbers are printed with no separator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/* Initialize the argument list */
	va_start(args, n);

	/* Iterate through the numbers */
	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%i", va_arg(args, int));

		/* Print the separator if it's not NULL and not the last number */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Print a newline character at the end */
	printf("\n");

	/* Clean up the argument list */
	va_end(args);
}
