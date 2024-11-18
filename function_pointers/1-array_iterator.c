#include <stddef.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i; /* is an unsigned integer type same like size*/

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
} 