#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of argument strings (unused in this program)
 *
 * Description: Prints the number of arguments passed to the program,
 * excluding the program's name itself.
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv; /* To ignore the error unused variables*/
	printf("%d\n", argc - 1);

	return (0);
}
