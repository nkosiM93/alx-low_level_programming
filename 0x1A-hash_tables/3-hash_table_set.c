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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node, *element, *temp;
	char *str;

	if (!ht || !key || !value)
		return (0);

	node = createNode(key, value);
	if (!node)
		return (0);
	element = ht->array[index]; /*get the head of the list on index*/
	if (!element)/*Add the new element as head of new list*/
	{
		ht->array[index] = node;
		return (1);
	}
	if (strcmp((const char *)element->key, key) == 0
			&& strcmp((const char *)element->value, value) != 0)
	{
		str = element->value;
		free(element->value);
		element->value = strdup(node->value);
		if (element->value == NULL)
		{
			free(node);
			element->value = str;
			return (0);
		}
		free(node);
		return (1);
	}
	else if (strcmp((const char *)element->key, key) != 0)
        {
		temp = element;
		node->next = temp;
		ht->array[index] = node;
		return (1);
        }
	else
		free(node);
	return (0);
}

/**
 * createNode - creates a list node (key-value pair)
 * @key: The key
 * @value: The value corresponding to the key
 * Return: returns a newly-created node
 */

hash_node_t *createNode(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
