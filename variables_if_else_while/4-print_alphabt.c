#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in
 * lowercase and exclude letter 'e' and 'q' followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettersL = 97;

	while (lettersL < 122)
	{
		if (lettersL != 113 && lettersL != 101)
		{
			putchar(lettersL);
		}
		lettersL++;
	}
	putchar('\n');
	return (0);
}
