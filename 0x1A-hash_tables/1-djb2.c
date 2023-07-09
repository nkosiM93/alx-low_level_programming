#include "hash_tables.h"

/**hash_djb2 - implements the djb2 hash funtion
 * @str: the string to be hashed
 * Return: the hash on success
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
