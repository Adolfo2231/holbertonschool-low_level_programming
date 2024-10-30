#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by
 * a newline.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 *
 * Description: This function prints the first n elements of the array
 *              pointed to by a, separated by commas and spaces.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
