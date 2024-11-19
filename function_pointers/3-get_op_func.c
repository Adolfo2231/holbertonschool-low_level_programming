
#include "3-calc.h"

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
    { /* Loop through the ops array */
        if (strcmp(s, ops[i].op) == 0)
        {                    /* Compare s with ops[i].op */
            return ops[i].f; /* Return the function pointer */
        }
        i++;
    }

    return NULL; /* No match found */
}
