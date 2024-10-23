#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar";
	int i = 0;

	for (; i < 8; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}
