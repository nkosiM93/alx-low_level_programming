#include "hash_tables.h"

/**
 * hash_table_get - retrieves an item from a hash table
 * @ht: hash table
 * @key: key corresponding to the value
 * Return: the retrived item
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index =
		key_index((const unsigned char *)key, ht->size);
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	node = ht->array[index];
	while (node)
	{
		if (strcmp((const char *)node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
