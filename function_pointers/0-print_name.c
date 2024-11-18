#include "function_pointers.h"

/**
 * 
 * print_name - Take to parameter a name and function to pointer
 * 
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}