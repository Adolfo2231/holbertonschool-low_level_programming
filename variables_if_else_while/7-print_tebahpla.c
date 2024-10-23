#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters =  122;

	while (letters > 96)
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');
	return (0);
}