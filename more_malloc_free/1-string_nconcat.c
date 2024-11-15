#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Maximum number of bytes to include from s2.
 *
 * Return: Pointer to the newly allocated memory containing the concatenated
 *         string. If allocation fails, returns NULL. If s1 or s2 is NULL,
 *         treats them as empty strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1 = 0, count2 = 0, i, j;
	char *array;

	if (s1 == NULL)
	{
		s1 = ""; /* Treat NULL as an empty string */
	}
	if (s2 == NULL)
	{
		s2 = ""; /* Treat NULL as an empty string */
	}
	/* Calculate the length of s1 */
	while (s1[count1] != '\0')
	{
		count1++;
	}
		while (s2[count2] != '\0')
	{
		count2++;
	}

		if (n < count2)
			count2 = n;
		array = malloc(sizeof(char) * ((count1 + count2) + 1));
		if (array == NULL) /* Check for allocation failure */
		{
			return (NULL);
		}
		/* Copy s1 into the new array */
		for (i = 0; i < count1; i++)
		{
			array[i] = s1[i];
		}
		/* Copy s2 into the new array up to count2 bytes */
		for (j = 0; j < count2; j++)
		{
			array[i + j] = s2[j];
		}
		array[i + j] = '\0'; /* Null-terminate the new string */
		return (array);
}
