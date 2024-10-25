#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: The function prints the 9 times table, each row is separated by
 * a newline, and each number is separated by a comma and a space.
 * Each number is printed in its own column, and proper formatting is applied
 * to ensure alignment.
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int product = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
