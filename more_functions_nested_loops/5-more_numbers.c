#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, ten times.
 *
 * Description: This function prints the numbers from 0 to 14
 * followed by a newline. It repeats this sequence ten times.
 * Only _putchar is used for output, and it is used three times.
 */

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int i = 0;

		for (; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar((i % 10) + '0');
		}
		n++;
		_putchar('\n');
	}
}
