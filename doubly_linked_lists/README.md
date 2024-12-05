Doubly Linked Lists Project
This project involves working with doubly linked lists in C. A doubly linked list is a type of linked list where each node contains two pointers: one pointing to the next node and another pointing to the previous node, allowing traversal in both directions. This project aims to help you practice dynamic memory management and pointers while working with linked data structures.

Project Requirements
Allowed Editors
vi, vim, emacs
Environment
All your files will be interpreted/compiled on Ubuntu 20.04 LTS using Python 3 (version 3.8.5).
File Requirements
All your files should end with a new line.
A README.md file, at the root of the folder of the project is mandatory.
Your code should use the Betty style and be checked using betty-style.pl and betty-doc.pl.
No global variables are allowed.
No more than 5 functions per file.
The only C standard library functions allowed are malloc, free, printf, and exit.
Header Files
The prototypes of all functions should be included in a header file called lists.h.
Your header files should be include-guarded.
Data Structure
The project uses the following doubly linked list data structure:


/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
Tasks

0. Print List
Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: The number of nodes.

1. List Length
Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);
Return: The number of nodes.

2. Add Node
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: The address of the new element, or NULL if it failed.

3. Add Node at the End
Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: The address of the new element, or NULL if it failed.

4. Free List
Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);

5. Get Node at Index
Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
Return: The node at the specified index, or NULL if the node does not exist.

6. Sum List
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);
Return: The sum of the data in the list, or 0 if the list is empty.

7. Insert at Index
Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
Return: The address of the new node, or NULL if it failed.
If it is not possible to add the new node at the specified index, do not add the new node and return NULL.

8. Delete at Index
Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
Return: 1 if it succeeded, -1 if it failed.

Compilation and Testing
All code will be compiled using gcc -Wall -pedantic -Werror -Wextra -std=gnu89 with all tasks tested using provided main functions.
Your code should compile without warnings or errors.
Use Valgrind to check for memory leaks.
Example Usage
Here is an example of how the functions work together:

c
Copy code
dlistint_t *head = NULL;
add_dnodeint_end(&head, 0);
add_dnodeint_end(&head, 1);
add_dnodeint_end(&head, 2);
add_dnodeint_end(&head, 3);
print_dlistint(head);  // Output: 0 1 2 3
sum_dlistint(head);    // Output: 6
delete_dnodeint_at_index(&head, 1);
print_dlistint(head);  // Output: 0 2 3
Additional Notes
Make sure to manage memory properly to avoid memory leaks.
Ensure your code is well-commented following the Betty style.
Follow all the guidelines provided in the project description.
