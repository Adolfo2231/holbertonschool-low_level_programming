#include "3-calc.h"

/**
 * get_op_func - Selects the correct operation function
 * @s: The operator passed as argument
 *
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter. If no match is found, returns NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* End marker */
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		/* Compare the operator string with the current array element */
		if (strcmp(s, ops[i].op) == 0)
		{
			/* Return the function pointer if match is found */
			return (ops[i].f);
		}
		i++;
	}

	/* Return NULL if no matching operator is found */
	return (NULL);
}
