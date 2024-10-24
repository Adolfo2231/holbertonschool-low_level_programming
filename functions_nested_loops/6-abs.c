#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of the integer
 *
 **/

int _abs(int n)
{
	if (n < 0)  /* If the integer is negative */
	{
		return (-n);  /* Return the negation of the integer */
	}
	else
	{
		return (n);  /* Return the integer if it is non-negative */
	}

	return (0);
}
