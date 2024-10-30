#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 *
 * Description: This function prints every other character in the
 *              string pointed to by str, followed by a newline.
 */

void puts2(char *str)
{
	while (*str != '\0') /* Loop until the null terminator is reached */
	{
		_putchar(*str);
		str += 2; /* Move to the next char */
	}
	_putchar(' ');
}
