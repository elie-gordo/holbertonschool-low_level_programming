#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * _strdup - duplicates a string
 * @str: source string
 *
 * Return: duplicated string, or NULL on failure
 */
static char *_strdup(const char *str)
{
	char *copy;
	size_t len;
	size_t i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}

/**
 * update_existing_value - updates value if key already exists
 * @node: head of collision list
 * @key: key to match
 * @value: new value
 *
 * Return: 1 if updated, 0 if key not found, -1 on allocation failure
 */
static int update_existing_value(hash_node_t *node, const char *key,
	const char *value)
{
	char *new_value;

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			new_value = _strdup(value);
			if (new_value == NULL)
				return (-1);
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * create_node - creates a hash node with duplicated key/value
 * @key: key to duplicate
 * @value: value to duplicate
 *
 * Return: new node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = _strdup(key);
	node->value = _strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}

	return (node);
}

/**
 * hash_table_set - adds or updates an element in hash table
 * @ht: hash table
 * @key: key (must not be empty)
 * @value: value associated with key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	int updated;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	updated = update_existing_value(node, key, value);
	if (updated == 1)
		return (1);
	if (updated == -1)
		return (0);

	node = create_node(key, value);
	if (node == NULL)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
