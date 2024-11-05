#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: 2D array representing the chessboard (8x8).
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Loop through each row */
	for (i = 0; i < 8; i++)
	{
		/* Loop through each column in the row */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n'); /* Move to the next row */
	}
}

