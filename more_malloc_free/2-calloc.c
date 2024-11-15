#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memoru for an array using malloc
 *
 * @size: size of type
 * @nmemb: member of the array
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array = malloc(sizeof(size) * nmemb);
	int i, j;

	j = nmemb;
	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		array[i] = 0;
	}

	return (array);
}
