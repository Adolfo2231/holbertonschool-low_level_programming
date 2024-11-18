#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...)
{
    va_list args;
    int total = 0;

    va_start(args, count);
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int); // Retrieve each integer argument
    }
    va_end(args);

    return total;
}

int main()
{
    printf("Sum: %d\n", sum(4, 10, 20, 30,10)); // Output: Sum: 60
    return 0;
}
