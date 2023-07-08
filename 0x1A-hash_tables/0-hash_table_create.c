#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table from scratch
 * @size: size of the array of items in th hash tables
 * Return: a newly created hash table on success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t hashTable = malloc(sizeof(hash_table_t));

	if(!hashTable)
		return NULL;
	hashTable->size = size;
	hashTable->array = NULL;
	return hashTable;
}
