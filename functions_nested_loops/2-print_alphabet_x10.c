#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		int letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
