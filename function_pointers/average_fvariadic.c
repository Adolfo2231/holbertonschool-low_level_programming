#include <stdarg.h>
#include <stdio.h>
#include "main.h"

double average(int count, ...)
{
    va_list args;
    double sum = 0.0;
    int i;

    if (count == 0)
    {
        return 0;
    }
    
    va_start(args, count);

    for (i = 0; i < count; i++)
    {
        sum += va_arg(args, int);
    }

    
    va_end(args);

    return sum / count;
}