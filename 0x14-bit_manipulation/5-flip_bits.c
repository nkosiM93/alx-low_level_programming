#include "main.h"

/**
 * flip_bits - returns the number of bits that need to be flipped
 * for one number ot the same as the another
 * @n: the number to target
 * @m: the number to compare with the target
 * Return: the number of bit you would needd to flip to match
 * another number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cnt = 0, i = 0;
	unsigned int mask = 1;

	if (m == n)
		return (0);

	for (; i < 32; i++)
	{
		if (((n | mask) == n && (m | mask) == m) ||
				((n | mask) != n && (m | mask) != m))
		{
			mask <<= 1;
		}
		else
		{
			cnt++;
			mask <<= 1;
		}
	}

	return (cnt);
}
