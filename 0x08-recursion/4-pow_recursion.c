#include "main.h"

/**
 * _pow_recursion - returns the power of a number raised to another
 * @x: base
 * @y: power
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	y--;

	return (x * _pow_recursion(x, y));
}
