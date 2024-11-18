#include "function_pointers.h"

/**
 * array_iterator - Itera en cada uno de los elementos del array
 * a la vez que lo envia al pointer to function
 *
 * @array: Pointer to the array
 * @size: size of the elements of the array
 * @action: function to check
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* is an unsigned integer type same like size*/

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
