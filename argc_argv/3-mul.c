#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Description: If the program receives exactly two arguments, it multiplies
 * them and prints the result followed by a new line. If it does not receive
 * exactly two arguments, it prints "Error" followed a new line and returns 1.
 * Return: 0 on success, 1 if incorrect number of arguments is provided
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

