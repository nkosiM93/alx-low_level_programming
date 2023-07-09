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
	char *key2 = strdup(key);

	if (!ht || !key)
		return (NULL);
	if (!key2)
		return (NULL);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key2) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
