#include "main.h"

/**
 * _isdigit - Checks if a number
 * @c: The number to be checked
 *
 * Return: 1 if c is number, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')/*'0' para que lea que es un numero*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
