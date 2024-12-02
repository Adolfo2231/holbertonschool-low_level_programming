#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>  /* Para size_t */

/**
 * struct list_s - Singly linked list node structure
 * @str: The string stored in the node
 * @next: Pointer to the next node in the list
 *
 * Description: A structure used to represent a node in a singly linked list.
 */
typedef struct list_s
{
	char *str;          /**< String stored in the node */
	struct list_s *next;/**< Pointer to the next node in the list */
} list_t;

/**
 * print_list - Prints all elements of a list_t list
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list to free
 *
 * Description: Frees all nodes in the list, including the strings stored.
 */
void free_list(list_t *head);

#endif /* LISTS_H */

