#include "main.h"

/**
 * set_bit - sets a bit at a certain position
 * @n: the ineteger containing the bit to be set
 * @index: the positio of the bit to be set
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index >= 32)
		return (-1);

	i = 1 << index;

	return (*n |= i);
}
