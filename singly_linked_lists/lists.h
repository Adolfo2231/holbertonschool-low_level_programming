#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - Singly linked list node
 * @str: String (dynamically allocated)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: Node structure for a singly linked list
 */
typedef struct list_s
{
	char *str;                  /* Pointer to string */
	unsigned int len;           /* Length of the string */
	struct list_s *next;        /* Pointer to the next node */
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */

