#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: the key
 * @size: size of the array
 * Return: The index where key will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
