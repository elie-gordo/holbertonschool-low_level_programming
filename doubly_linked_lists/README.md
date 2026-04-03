# C - Doubly linked lists

## 1) Project goal

This project introduces doubly linked lists in C.

The required tasks are:

- print all nodes
- count nodes
- add node at beginning
- add node at end
- free whole list
- get node at index
- sum all node values
- insert node at index
- delete node at index

## 2) Mandatory rules

- Ubuntu 20.04 LTS
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Allowed editors: `vi`, `vim`, `emacs`
- `README.md` is mandatory in project root folder
- Betty style is mandatory
- No global variables
- No more than 5 functions per file
- Allowed C standard library functions: `malloc`, `free`, `printf`, `exit`
- Function prototypes must be declared in `lists.h`
- All header files must be include guarded

## 3) Data structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## 4) Files

- `lists.h`
- `0-print_dlistint.c`
- `1-dlistint_len.c`
- `2-add_dnodeint.c`
- `3-add_dnodeint_end.c`
- `4-free_dlistint.c`
- `5-get_dnodeint.c`
- `6-sum_dlistint.c`
- `7-insert_dnodeint.c`
- `8-delete_dnodeint.c`
