#include "main.h"

/**
 * is_prime_number - ...
 * @n: integer to be checked for primeness
 * Return: 0 if not and 1 if it is...
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else if (n == 0)
		return (0);

}
