#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	for (i = 0; i < 16; i++)
	{
		printf("%x", i);
	}
	printf("\n");
	return (0);
}

