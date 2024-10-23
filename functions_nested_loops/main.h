/**
 *string - Prints a string followed by a new line
 * @str: Pointer to the string to be printed
 *
 * putchar to add a new line
 *
 * Description: This function takes a pointer to a string as input
 * and prints each character in the string until it encounters the
 * newline character '\n'. After printing the string, a new line is
 * printed.
 */

void string(const char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
