#include <stdio.h>

/**
 * main - Prints single-digit numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n = 0;
	
        while (n < 10)
        {
                putchar(n + '0');

		if ( n != 9)
		{
		putchar(',');
		putchar(' ');
		}
                n++;
        }
	putchar(' ')
	return (0);
}
