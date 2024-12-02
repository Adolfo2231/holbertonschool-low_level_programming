# C - Singly Linked Lists

## Description
This project focuses on implementing and understanding singly linked lists in C. Singly linked lists are data structures that consist of nodes where each node contains data and a pointer to the next node in the sequence. This project explores the implementation of basic operations such as printing, adding, and freeing nodes in a linked list.

## Learning Objectives
By the end of this project, you should be able to:
- Explain when and why to use linked lists instead of arrays.
- Build and manipulate singly linked lists.

---

## Requirements
- **Editors**: vi, vim, emacs
- **Compilation**: `gcc` with flags:
-Wall -Werror -Wextra -pedantic -std=gnu89

markdown
Copy code
- **Coding Style**: Betty style guidelines (`betty-style.pl`, `betty-doc.pl`).
- **Restrictions**:
- No global variables.
- Maximum of 5 functions per file.
- Only standard library functions allowed: `malloc`, `free`, `exit`.
- Use `_putchar` for output (no `printf`, `puts`, etc.).
- **Project structure**:
- Header file: `lists.h`
- Include guards in header files.
- Mandatory `README.md` file in the project root.

---

## Data Structure

```c
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/
typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
} list_t;
