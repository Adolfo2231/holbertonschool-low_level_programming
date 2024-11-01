#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Description: This function takes an array of integers and
 * reverses the order of its elements in place.
 */
void reverse_array(int *a, int n)
{
	int i;       /* Index variable for the loop */
	int temp;    /* Temporary variable for swapping elements */

	for (i = 0; i < n / 2; i++)
	{
		/* Swap elements in place */
		temp = a[i];                     /* Store current element in temp */
		a[i] = a[n - i - 1];    /* Move the opposite element to current position */
		a[n - i - 1] = temp;             /* Set the opposite element to temp value */
	}
}
