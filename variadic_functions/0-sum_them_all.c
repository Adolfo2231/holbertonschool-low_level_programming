#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the value receive
 *
 * @n:number of elements
 *
 * Return: sum of all elements
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}
