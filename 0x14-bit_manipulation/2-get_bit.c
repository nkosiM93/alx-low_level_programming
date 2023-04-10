#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: the decimal value
 * @index: the index at which we are to gt the bit
 * Return: the value of the digit (0 or 1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 1 << index;

	if (index >= 32)
		return (-1);

	i = 1 << index;

	if ((n & i) == 0)
		return (0);
	else
		return (1);
}
