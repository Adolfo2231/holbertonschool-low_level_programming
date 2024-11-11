#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated space in memory containing
 *         the concatenated string. Returns NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int count1 = 0, count2 = 0;
	char *array;
	int i, j;

	/* Treat NULL input strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	while (s1[count1] != '\0')
		count1++;

	/* Calculate the length of s2 */
	while (s2[count2] != '\0')
		count2++;

	/* Allocate space for the concatenated string and null terminator */
	array = malloc((count1 + count2 + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	/* Copy characters from s1 into array */
	for (i = 0; i < count1; i++)
		array[i] = s1[i];

	/* Copy characters from s2 into array, following s1's characters */
	for (j = 0; j < count2; j++, i++)
		array[i] = s2[j];

	/* Add null terminator to the end of the concatenated string */
	array[i] = '\0';

	return (array);
}
