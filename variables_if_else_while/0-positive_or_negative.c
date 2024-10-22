#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints whether n is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
if (n > 0)
{
	printf("is positive\n");
}
else if (n == 0)
{
	printf("is zero\n");
}
else if (n < 0)
{
	printf("is negative\n");
}
	return (0);
}
