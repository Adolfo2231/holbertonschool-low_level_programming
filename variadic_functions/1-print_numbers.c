#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

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
        if (i == (n -1))
        {
            printf("%i", va_arg(args, int));
        }
        else
        {
        printf("%i%s", va_arg(args, int), separator);
        }
    }
    va_end(args);
}