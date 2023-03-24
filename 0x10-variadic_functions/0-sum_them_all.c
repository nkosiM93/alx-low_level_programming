#include "variadic_functions.h"

/**
 * sum_them_all - sums all the args passed to it
 * @n: the number of arguments passed ot the function
 * Return: the sum of the arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list list;

	va_start(list, n); /* initialization */

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list); /* clen up*/
	return (sum);
}
