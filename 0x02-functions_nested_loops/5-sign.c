#include "main.h"
#include <unistd.h>

/**
 *print_sign - prints value sign
 *@n: value to be checked
 *Return: 1 - positive, 0 - zero, -1 - negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return(1);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return(0);
	}
	else
	{
		write(1, "-", 1);
		return(-1);
	}
}
