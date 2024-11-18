#include <stdio.h>

// Declaración de funciones para las operaciones
int sumar(int a, int b)
{
	return a + b;
}

int restar(int a, int b)
{
	return a - b;
}

int multiplicar(int a, int b)
{
	return a * b;
}

int dividir(int a, int b)
{
	if (b == 0)
	{
		printf("Error: División por cero\n");
		return 0;
	}
	return a / b;
}

int main()
{
	int num1, num2;
	char operador, resp;
	int resultado;

	// Declarar un puntero a función
	int (*operacion)(int, int);

	do
	{
		// Leer datos del usuario
		printf("Ingresa el primer numero: ");
		scanf("%d", &num1);
		printf("Ingresa el segundo numero: ");
		scanf("%d", &num2);
		printf("Ingresa la operacion (+, -, *, /): ");
		scanf(" %c", &operador); // Espacio antes de %c para limpiar caracteres sobrantes

		// Seleccionar la operación usando un switch
		switch (operador)
		{
			case '+':
				operacion = sumar;
				break;
			case '-':
				operacion = restar;
				break;
			case '*':
				operacion = multiplicar;
				break;
			case '/':
				operacion = dividir;
				break;
			default:
				printf("Operador no valido\n");
				continue; // Volver al inicio del bucle
		}

		// Llamar a la función a través del puntero
		resultado = operacion(num1, num2);

		// Imprimir el resultado
		printf("El resultado es: %d\n", resultado);

		// Preguntar si desea continuar
		printf("¿Desea hacer otra operacion (y/n)? ");
		while ((getchar()) != '\n'); // Limpiar el buffer antes de leer resp
		scanf("%c", &resp);

	} while (resp == 'y'); // Repite mientras el usuario ingrese 'y'

	return 0;
}
