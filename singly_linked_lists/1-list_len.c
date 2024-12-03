#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in the list (unsigned integer).
 *
 * Description: This function traverses through the entire linked list and
 *              counts the number of nodes. If the list is empty or the
 *              pointer is NULL, the function returns -1.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (!h)
	{
		return (-1); /* Return -1 if the list is empty or the pointer is NULL */
	}

	while (h)
	{
		count++;   /* Increment count for each node */
		h = h->next; /* Move to the next node */
	}

	return (count); /* Return the total count of nodes */
}

