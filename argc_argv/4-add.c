#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Description: Adds positive numbers passed as arguments and prints
 * the result. If no numbers are passed, it prints 0. If any argument
 * contains non-digit characters, it prints "Error" and returns 1.
 * Return: 0 on success, 1 if a non-digit symbol is found in any argument
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
