#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers separated by ", "
 * in ascending order using only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
