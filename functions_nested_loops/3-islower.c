#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	while (c != '\n')
	{
		if (c >= 65 || c <= 90)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}

	return (0);
}
