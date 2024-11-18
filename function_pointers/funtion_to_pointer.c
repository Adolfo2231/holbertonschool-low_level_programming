#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
}

int main()
{
    int (*ptrFuncion)(int, int); /* Declarar puntero a función*/
    ptrFuncion = &suma;          /*Asignar la dirección de la función*/

    int resultado = ptrFuncion(3, 4); /*Llamar a la función usando el puntero */
    printf("La suma es: %d\n", resultado);

    return 0;
}
