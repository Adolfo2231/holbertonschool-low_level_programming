#include <stdio.h>

void reset_to_98(int *n)
{
    *n = 98;
}

int main()
{
    int num = 2;
    reset_to_98(&num);
    printf("%i", num);

    return (0);
}
