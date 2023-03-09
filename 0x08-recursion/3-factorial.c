#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: the number to find the factorial of
 * Return: the factorial of the number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
