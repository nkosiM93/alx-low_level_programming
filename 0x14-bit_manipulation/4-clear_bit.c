#include "main.h"

/**
 * clear_bit - sets a bit at a certain position
 * @n: the ineteger containing the bit to be set
 * @index: the positio of the bit to be cleared
 * Return: 1 if bit-clearing was successful, 0 if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index >= 32 || n == NULL)
		return (-1);

	i = ~(1 << index);

	*n &= i;

	return (1);
}
