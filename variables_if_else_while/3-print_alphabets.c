#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in
 * lowercase and uppercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettersL = 97;
	char lettersU = 65;

	while (lettersL < 123)
	{
		putchar(lettersL);
		lettersL++;
	}
	while (lettersU < 91)
	{
		putchar(lettersU);
		lettersU++;
	}
	putchar('\n');
	return (0);
}
