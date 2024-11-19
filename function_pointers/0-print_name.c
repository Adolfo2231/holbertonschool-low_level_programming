#include "function_pointers.h"

/**
 * print_name - Take to parameter a name and function to pointer
 *
 * @name: Receive a pointer string
 * @f: function callback, receive a funtion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if(name && f) /* Asegurarme que no sea nulo*/
	f(name);
}
