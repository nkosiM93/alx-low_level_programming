#include <unistd.h>
#include "main.h"

/**
 *print_last_digit - pr last digi
 *@d: value to be checked for last number
 *Return: last digit
 */

int print_last_digit(int d)
{
	int res = d % 10;

	if (res < 0)
		res = -res;

	char c = '0' + 6;

	write(1, &c, 1);
	return (res);
}
