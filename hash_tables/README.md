# C - Hash tables

## 1) Project goal

This project introduces hash tables in C.

The required tasks are:

- create a hash table
- implement djb2 hash function
- map a key to an index
- set/update key-value pairs
- get value from key
- print hash table content
- delete hash table

## 2) Mandatory rules

- Ubuntu 20.04 LTS
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Allowed editors: `vi`, `vim`, `emacs`
- `README.md` is mandatory in project root folder
- Betty style is mandatory
- No global variables
- No more than 5 functions per file
- C standard library is allowed
- Function prototypes must be declared in `hash_tables.h`
- All header files must be include guarded

## 3) Data structures

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## 4) Files

- `hash_tables.h`
- `0-hash_table_create.c`
- `1-djb2.c`
- `2-key_index.c`
- `3-hash_table_set.c`
- `4-hash_table_get.c`
- `5-hash_table_print.c`
- `6-hash_table_delete.c`
