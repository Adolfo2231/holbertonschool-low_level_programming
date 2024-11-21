#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;
    char *str;

    va_start(args, n);

    if (separator == NULL)
    {
        printf("\n");
    }

    if (args == NULL)
    {
        printf("nil");
    }

    for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *);

        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {

            printf("%s", str);
        }

        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }

    va_end(args);
    printf("\n");
}