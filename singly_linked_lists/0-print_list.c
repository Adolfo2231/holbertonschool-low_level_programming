#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A read-only pointer to the head node of a singly linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)  /* Recorre la lista hasta el final */
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");  /* Si el string es NULL, imprime "(nil)" */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);  /* Imprime el string */
		}

		node_count++;  /* Incrementa el contador de nodos */

		h = h->next;  /* Mueve al siguiente nodo */
	}

	return (node_count);  /* Devuelve el número de nodos */
}
