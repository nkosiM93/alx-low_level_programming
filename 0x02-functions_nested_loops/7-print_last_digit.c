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

	write(1, &res, 1);
	return (res);
}
