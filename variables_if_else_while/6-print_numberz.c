#include <stdio.h>

/**
 * Print all single-digit numbers from 0 to 9
 * with loop while
 * using putchar
*/

int main(void)
{
        int n = 0;

        while (n < 10)
        {
                putchar(n + '0');
                n++;
        }
        putchar('\n');
        return (0);
}
