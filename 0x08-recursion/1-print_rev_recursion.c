#include "main.h"

/**
 * _print_rev_recursion -  print a string inreverse
 *@s: the string to be printed inreverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	if (*s)
		_putchar(*s);
}
