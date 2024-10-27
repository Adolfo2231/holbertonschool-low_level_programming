#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98 in order.
 * @n: The starting integer.
 *
 * Description: This function prints all natural numbers starting from n
 * and ending at 98. If n is less than 98, it increments; if n is greater than
 * 98, it decrements. Each number is followed by a comma and a space, except
 * the last number (98), which is printed without trailing punctuation.
 */
void print_to_98(int n)
{
    int num; /* Holds the absolute value of n for easier printing */

    while (n != 98)
    {
        /* Check if n is negative; handle negative sign */
        if (n < 0)
        {
            _putchar('-'); /* Print the negative sign */
            num = -n;      /* Convert n to positive */
        }
        else
            num = n;

        /* Print each digit; if n has two digits, print the tens place */
        if (num / 10)
            _putchar((num / 10) + '0'); /* Print tens place */
        _putchar((num % 10) + '0');     /* Print units place */

        /* Print comma and space, except after the last number */
        _putchar(',');
        _putchar(' ');

        /* Update n: Increment if less than 98, decrement if greater than 98 */
        if (n < 98)
            n++;
        else
            n--;
    }

    /* Print final number (98) without trailing comma and space */
    _putchar('9');
    _putchar('8');
    _putchar('\n'); /* Newline at the end */
}

