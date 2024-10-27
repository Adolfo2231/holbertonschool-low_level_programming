#include "main.h"

/**
 * print_number - Helper function to print an integer using _putchar.
 * @n: The integer to print.
 *
 * Description: This function handles both positive and negative integers
 * and prints each digit individually.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98 in order.
 * @n: The starting integer.
 *
 * Description: This function prints all natural numbers starting from n
 * and ending at 98, with each number followed by a comma and a space,
 * except for the final number (98).
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n); /* Print the current number */
		_putchar(',');   /* Print comma */
		_putchar(' ');   /* Print space */

		/* Update n to approach 98 */
		if (n < 98)
			n++;
		else
			n--;
	}
	print_number(98); /* Print the final number without trailing comma */
	_putchar('\n');   /* Newline at the end */
}
