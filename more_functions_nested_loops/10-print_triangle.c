#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The size of the triangle
 *
 * Description: If size is 0 or less, prints only a new line.
 *              Uses the character '#' to print the triangle.
 *              Each row starts with spaces to align the triangle.
 */

void print_triangle(int size)
{
	int j;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
