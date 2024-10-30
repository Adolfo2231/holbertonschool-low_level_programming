#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 *              pointed to by str until the null terminator is
 *              reached. It also prints a new line after the string.
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0') /* Loop until the null terminator is reached */
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
