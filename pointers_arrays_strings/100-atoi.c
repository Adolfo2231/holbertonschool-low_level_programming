#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/* Skip leading characters until finding a sign or digit */
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}

	/* Convert each digit to an integer */
	while (*s >= '0' && *s <= '9')
	{
		/* Check if adding the next digit would cause overflow */
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

