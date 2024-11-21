#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - receive a number of elements and prints them
 *
 * @separator: char elements to separate number elements
 * @n: number of elements
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%i", va_arg(args, int));
		}
		else
		{
			printf("%i%s", va_arg(args, int), separator);
		}
	}
	printf("\n");
	va_end(args);
}
