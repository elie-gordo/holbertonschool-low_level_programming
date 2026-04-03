#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of hash table array
 *
 * Return: index where key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || *key == '\0' || size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
