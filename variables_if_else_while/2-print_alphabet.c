#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters = 97;

	while (letters < 123)
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
