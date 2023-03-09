#include "main.h"

/**
 * _sqrt_recursion - find the square of a number recursively
 * @n: the number who's square is to be found
 * Return: ...
 */

int _sqrt_recursion(int n)
{
	int m;

	m = 0;

	if (n == 1)
		return (1);

	if (n == 0)
		return (0);

	while (m * m < n)
		m++;

	if (m * m == n)
		return (m);
	else
		return (-1);
}
