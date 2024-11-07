#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Description: Prints each argument passed to the program,
 * including the program's name.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
