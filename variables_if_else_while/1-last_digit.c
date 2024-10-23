#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a random number stored in n
 * and evaluates it as per the conditions:
 * - If the last digit is greater than 5
 * - If the last digit is 0
 * - If the last digit is less than 6 and not 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int last, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}
