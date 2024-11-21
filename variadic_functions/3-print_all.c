#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

void print_all(const char *const format, ...)
{
    int i = 0;
    char separator = '\0';
    char *ptr;

    va_list args;
    va_start(args, format);

    while (format && format[i] != '\0')
    {
        switch (format[i])
        {
        case 'c':
            printf("%c ", separator);
            printf("%c", va_arg(args, int));
            break;
        case 'i':
            printf("%c ", separator);
            printf("%d", va_arg(args, int));
            break;
        case 'f':
            printf("%c ", separator);
            printf("%f", va_arg(args, double));
            break;
        case 's':
            printf("%c ", separator);
            ptr = va_arg(args, char *);
            if (ptr == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s ", ptr);
            }
            break;
        default:
            break;
        }
        separator = ',';
        i++;
    }
    printf(("\n"));
    va_end(args);
}