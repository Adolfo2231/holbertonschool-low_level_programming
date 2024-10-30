#include <stdio.h>

/**
 * multiplo - Checks if a number is a multiple of 3 or 5.
 * @n: The number to check.
 *
 *
 * This function prints "Fizz" if the number is a multiple of 3,
 * "Buzz" if it is a multiple of 5, "FizzBuzz" if it is a
 * multiple of both, or the number itself if neither.
 */

void multiplo(int n)
{
	int multiplo3 = n % 3;
	int multiplo5 = n % 5;

	if (n > 99)
	{
		printf("Buzz");
	}
	else if (multiplo3 == 0 && multiplo5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (multiplo3 == 0)
	{
		printf("Fizz ");
	}
	else if (multiplo5 == 0)
	{
		printf("Buzz ");
	}
	else
	{
		printf("%d ", n);
	}
}

/**
 * main - Entry point of the program.
 *
 * This function iterates through numbers from 1 to 100,
 * calling the multiplo function to print the appropriate
 * result for each number.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		multiplo(num);
		num++;
	}
	printf("\n");
	return (0);
}
