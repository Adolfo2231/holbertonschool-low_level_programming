#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: the result of x raised to the power of y, or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);  /* Handle negative exponents */
	}
	if (y == 0)
	{
		return (1);   /* Base case: x^0 = 1 */
	}
	return (x * _pow_recursion(x, y - 1));  /* Recursive case */
}
