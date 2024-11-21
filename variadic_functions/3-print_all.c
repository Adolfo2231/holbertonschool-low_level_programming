#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints arguments of different types based on a format string
 * @format: A string specifying the argument types ('c', 'i', 'f', 's')
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *ptr, *sep = "";

	va_list args;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				ptr = va_arg(args, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", sep, ptr);
				break;
			default:
				i++;
				continue;
		}
		sep = ", "; /*Set separator after the first valid element*/
		i++;
	}
	printf("\n");
	va_end(args);
}
