#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: Pointer to the first element of the square matrix.
 * @size: The size of the matrix (number of rows/columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	/* Calculate sums of the primary and secondary diagonals */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];      /* Primary diagonal */
		sum2 += a[(i + 1) * (size - 1)]; /* Secondary diagonal */
	}

	/* Print the sums of the diagonals */
	printf("%d, %d\n", sum1, sum2);
}

