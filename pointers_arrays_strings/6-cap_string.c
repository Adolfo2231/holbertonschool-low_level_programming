#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Traverse the string */
	while (str[i] != '\0')
	{
		/* Capitalize first character if it's lowercase */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			/* Check if the previous character is a separator */
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
