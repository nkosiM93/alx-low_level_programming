#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table to insert elements to
 * @key: the key to be converted to the index
 * @value: The value that corresponds to the key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, SIZE);
	hash_node_t *node, *element, *temp;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value =strdup(value);
	if (!node->value)
	{
		free(node);
		return (0);
	}
	element = ht->array[index];
	if (!element)
	{
		node->next = NULL;
		element = node;
		ht->array[index] = element;
		return (1);
	}
	temp = element;
	node->next = temp;
	element = node;
	ht->array[index] = element;
	return(1);
}
