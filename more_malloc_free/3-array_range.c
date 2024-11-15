#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value in the range (inclusive).
 * @max: The maximum value in the range (inclusive).
 *
 * Return: Pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	/* Validate inputs */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	/* Populate the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}

